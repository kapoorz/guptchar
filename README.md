nmapper V2.3

Created By : Bhavya Kapoor and my Gurus

It Only Works For Debian Based Systems


### 1. Download Script On Your PC and Go to the directory

#### USE:
```
git clone https://github.com/achallion/nmapper.git && cd nmapper
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
g++ main.cpp -o nmapper
```


### 4. Move nmapper to /opt/

#### USE:
```
mv nmapper /opt/
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
nmapper <ip address>
```



Thank You



'               !!! Hope You would now be able to use the script in any folder !!!
   



'                              {[ HAVE FUN GUYS]}



'                           //     Open To any suggestion       \\
'                           \\ Open Issue if any Conflict comes //
            




'               |-| First Read the Readme carefully before opening an issue |-|
