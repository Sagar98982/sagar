//copy content from one file to another file

import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

//import java.util.*;


class M34
{

    public static void main(String[] args) throws IOException       //IOException bhi ek pre defined class h jo java k IO package me available h
    {

        FileInputStream r = new FileInputStream("c:\\Users\\lenovo\\Desktop\\sagar.txt");      // ye file ko create or read k liye use hota h
        FileOutputStream w = new FileOutputStream("c:\\Users\\lenovo\\Desktop\\hitesh.txt");   // ye file ko create or write k lie use hota h

        int i;

        while((i=r.read())!=-1)

        {
            
            w.write((char)i);              //yha pe w vali file me i me jo data hoga vo character by character  k form m ewrite karega data

        

        }


        System.out.println("data copied Sucessfully");

    }


}