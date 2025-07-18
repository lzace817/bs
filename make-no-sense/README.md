# inconsistent make

## quick start

``` bash
./build-ok.sh        # reference build works ok
./build-ok.sh clean  # clean up to text
./build-bs.sh        # thiss will fail
diff -u build-ok.sh build-ok.sh
```


``` patch
@@ -1,4 +1,4 @@
 #!/bin/bash

-OUTPUT=../make-no-sense \
+OUTPUT=.                \
     SOURCE=../src make $@
```

i.e, `../make-no-sense` and `.` produce different results even though they are the same directory.