# mysym
Прототип символьного драйвера Linux
## Test
$ make

$ make clean

$ sudo insmod molab.ko debug=1

$ ls /dev/o*

/dev/olab

$ sudo chmod 0666 /dev/olab

$ cat /dev/olab 

static: not initialized!

$ echo 1234567890 > /dev/olab

$ cat /dev/olab 

1234567890

$ echo 1234567890987654321 > /dev/olab

$ cat /dev/olab 

1234567890987654321

sudo rmmod molab 

$ dmesg | grep "! " |  tail -n100

[568392.294914] ! installed device /dev/olab in mode 0

[568481.101186] ! open - node: ffff8800b8abcac0, file: ffff8800bfb39f00, refcount: 1

[568481.101217] ! read - file: ffff8800bfb39f00, read from ffffffffa09fb000 bytes 131072; refcount: 1

[568481.101225] ! return bytes : 25

[568481.101282] ! read - file: ffff8800bfb39f00, read from ffffffffa09fb000 bytes 131072; refcount: 1

[568481.101284] ! return : EOF

[568481.101308] ! close - node: ffff8800b8abcac0, file: ffff8800bfb39f00, refcount: 1

[568515.155265] ! open - node: ffff8800b8abcac0, file: ffff880129f93d00, refcount: 1

[568515.155300] ! write - file: ffff880129f93d00, write to ffffffffa09fb000 bytes 11; refcount: 1

[568515.155303] ! put bytes : 11

[568515.155314] ! close - node: ffff8800b8abcac0, file: ffff880129f93d00, refcount: 1

[568518.859080] ! open - node: ffff8800b8abcac0, file: ffff88000d587100, refcount: 1

[568518.859112] ! read - file: ffff88000d587100, read from ffffffffa09fb000 bytes 131072; refcount: 1

[568518.859120] ! return bytes : 11

[568518.859177] ! read - file: ffff88000d587100, read from ffffffffa09fb000 bytes 131072; refcount: 1

[568518.859179] ! return : EOF

[568518.859202] ! close - node: ffff8800b8abcac0, file: ffff88000d587100, refcount: 1

[568534.554520] ! open - node: ffff8800b8abcac0, file: ffff8800b8ff2300, refcount: 1

[568534.554542] ! write - file: ffff8800b8ff2300, write to ffffffffa09fb000 bytes 20; refcount: 1

[568534.554543] ! put bytes : 20

[568534.554550] ! close - node: ffff8800b8abcac0, file: ffff8800b8ff2300, refcount: 1

[568537.589426] ! open - node: ffff8800b8abcac0, file: ffff8800bf2c7600, refcount: 1

[568537.589458] ! read - file: ffff8800bf2c7600, read from ffffffffa09fb000 bytes 131072; refcount: 1

[568537.589466] ! return bytes : 20

[568537.589520] ! read - file: ffff8800bf2c7600, read from ffffffffa09fb000 bytes 131072; refcount: 1

[568537.589521] ! return : EOF

[568537.589546] ! close - node: ffff8800b8abcac0, file: ffff8800bf2c7600, refcount: 1

[568660.622478] ! released device /dev/olab

