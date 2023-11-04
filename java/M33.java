// file ko rename krne k lie

import java.io.File;

class M33
{
    public static void main(String[] args)

    {
        
        
        
        File f = new File("c:\\Users\\lenovo\\Desktop\\sagar.txt");

        File r = new File("c:\\Users\\lenovo\\Desktop\\hitesh.txt");

        if(f.exists())

        {

            System.out.println(f.renameTo(r));

        }

        else
        {

            System.out.println("File does not exists");


        }

    }


}

