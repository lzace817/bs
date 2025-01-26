# the wonderfull stability of intel syntax on gnu assembler

it interprets a constant in a different way depending on the relative position of the constant definition.

## quick start
``` bash
as -msyntax=intel -mnaked-reg bs.asm -o bs.o && objdump -d bs.o
```

```
0000000000401000 <_start>:
  401000:       48 8b 14 25 0c 00 00    mov    0xc,%rdx
  401007:       00

...

0000000000401016 <foo>:
  401016:       48 c7 c2 0c 00 00 00    mov    $0xc,%rdx
```

Exactly the same code producing different results.