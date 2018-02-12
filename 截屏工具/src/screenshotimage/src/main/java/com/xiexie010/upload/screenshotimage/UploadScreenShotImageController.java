package com.xiexie010.upload.screenshotimage;


import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.*;
import org.springframework.web.multipart.MultipartFile;

import java.io.*;
import java.net.Inet4Address;
import java.util.UUID;

@RestController
public class UploadScreenShotImageController  {


    @RequestMapping(value="/uploadimg", method = RequestMethod.POST)
     public  String uploadImg(@RequestParam("file") MultipartFile multipartFile)  {
        System.out.printf("begin");

        try {

            String file_name ="http://"+Inet4Address.getLocalHost().getHostAddress()+":8080/"+ saveImg(multipartFile, "D:\\testupload");
            return file_name;
        } catch (IOException e) {
            e.printStackTrace();
        }


        return "url";
    }
    @RequestMapping(value="/testStr", method = RequestMethod.POST)
    public String testStr(@RequestParam String aa){
        System.out.printf("end");
        return "";
    }

    public static String saveImg(MultipartFile multipartFile,String path) throws IOException {
        File file = new File(path);
        if (!file.exists()) {
            file.mkdirs();
        }
        FileInputStream fileInputStream = (FileInputStream) multipartFile.getInputStream();
        String fileName = UUID.randomUUID().toString() + ".png";
        BufferedOutputStream bos = new BufferedOutputStream(new FileOutputStream(path + File.separator + fileName));
        byte[] bs = new byte[1024];
        int len;
        while ((len = fileInputStream.read(bs)) != -1) {
            bos.write(bs, 0, len);
        }
        bos.flush();
        bos.close();
        return fileName;
    }


}
