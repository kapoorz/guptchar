GUPTCHAR v3.1

Created By : Bhavya Kapoor and helped by my Gurus

It Only Works For Debian Based Systems


### 1. Download Script On Your PC and Go to the directory

#### USE:
```
git clone https://github.com/achallion/guptchar.git && cd guptchar
```


### 2. Install some dependencies as 
   (i)   nmap
   (ii)  sed
   (iii) grep
   (iv)  g++

#### USE:

```
apt-get install nmap sed grep g++
```


### 3. After g++ is installed , Lets Compile the script

#### USE:
```
g++ main.cpp -o guptchar
```


### 4. Move guptchar to /opt/

#### USE:
```
mv guptchar /opt/
```


### 5. Set opt to system path 

#### USE:
```
echo "export PATH=/opt:\$PATH" >> ~/.bashrc
```


### 6. Close the terminal and again open


### 7. Using The script
Just know your ip address

#### USE:
```
guptchar <ip address>
```



Thank You


!!! Hope You would now be able to use the script in any folder !!!
   



                            {[  HAVE FUN GUYS  ]}



*     Open To any suggestion

*     Open Issue if any Conflict comes 
            




             |-|   First Read the Readme carefully before opening an issue    |-|
