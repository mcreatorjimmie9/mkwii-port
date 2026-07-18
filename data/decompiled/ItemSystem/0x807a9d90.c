/**
 * ItemObjFib_makeArray
 * @addr 0x807a9d90
 * @size 152 bytes
 * @frame 0 bytes
 * @calls 2 function(s)
 */
void ItemObjFib_makeArray(void) {
    /* r3 = r5+0x0 */
    /* r3 = r3+0x74 */
    /* 0x8068f828() */
    /* r0 = r30+0x78 */
    /* li r29, 2 */
    /* rlwinm. r0, r0, 0, 0x10, 0x10 */
    /* if (cr0 !=) goto 0x807a9db4 */
    /* r4 = r30+0x6c */
    /* goto 0x807a9db8 */
    /* li r4, 0xc */
    /* cmplwi r4, 0xc */
    /* if (cr0 >=) goto 0x807a9dfc */
    /* r3, 0  (load upper immediate) */
    /* r0 = r3+0x0 */
    /* cmpwi r0, 0 */
    /* if (cr0 ==) goto 0x807a9dfc */
    /* r3, 0  (load upper immediate) */
    /* mulli r0, r4, 0xf0 */
    /* r3 = r3+0x0 */
    /* add r3, r3, r0 */
    /* r0 = r3+0xf4 */
    /* cmpwi r0, 0 */
    /* if (cr0 !=) goto 0x807a9df0 */
    /* li r29, 3 */
    /* cmpwi r0, 1 */
    /* if (cr0 !=) goto 0x807a9dfc */
    /* li r29, 4 */
    /* r3 = r30+0x330 */
    /* li r4, 1 */
    /* r12 = r3+0x0 */
    /* r12 = r12+0xc */
    /* mtctr r12 */
    /* indirect call via CTR */
    /* r3 = r30+0xa4 */
    /* 0x8078a188() */
    /* r3 = r30+0x330 */
    /* addi r4, r1, 8 */
    /* f0 = *(f32*)(r31+0x198) */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x807a9d90: 80 65 00 00              lwz      r3, 0(r5) */
/* 0x807a9d94: 80 63 00 74              lwz      r3, 0x74(r3) */
/* 0x807a9d98: 4b ee 5a 91              bl       0x8068f828 */
/* 0x807a9d9c: 80 1e 00 78              lwz      r0, 0x78(r30) */
/* 0x807a9da0: 3b a0 00 02              li       r29, 2 */
/* 0x807a9da4: 54 00 04 21              rlwinm.  r0, r0, 0, 0x10, 0x10 */
/* 0x807a9da8: 40 82 00 0c              bne      0x807a9db4 */
/* 0x807a9dac: 88 9e 00 6c              lbz      r4, 0x6c(r30) */
/* 0x807a9db0: 48 00 00 08              b        0x807a9db8 */
/* 0x807a9db4: 38 80 00 0c              li       r4, 0xc */
/* 0x807a9db8: 28 04 00 0c              cmplwi   r4, 0xc */
/* 0x807a9dbc: 40 80 00 40              bge      0x807a9dfc */
/* 0x807a9dc0: 3c 60 00 00              lis      r3, 0 */
/* 0x807a9dc4: 88 03 00 00              lbz      r0, 0(r3) */
/* 0x807a9dc8: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x807a9dcc: 41 82 00 30              beq      0x807a9dfc */
/* 0x807a9dd0: 3c 60 00 00              lis      r3, 0 */
/* 0x807a9dd4: 1c 04 00 f0              mulli    r0, r4, 0xf0 */
/* 0x807a9dd8: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x807a9ddc: 7c 63 02 14              add      r3, r3, r0 */
/* 0x807a9de0: 80 03 00 f4              lwz      r0, 0xf4(r3) */
/* 0x807a9de4: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x807a9de8: 40 82 00 08              bne      0x807a9df0 */
/* 0x807a9dec: 3b a0 00 03              li       r29, 3 */
/* 0x807a9df0: 2c 00 00 01              cmpwi    r0, 1 */
/* 0x807a9df4: 40 82 00 08              bne      0x807a9dfc */
/* 0x807a9df8: 3b a0 00 04              li       r29, 4 */
/* 0x807a9dfc: 80 7e 03 30              lwz      r3, 0x330(r30) */
/* 0x807a9e00: 38 80 00 01              li       r4, 1 */
/* 0x807a9e04: 81 83 00 00              lwz      r12, 0(r3) */
/* 0x807a9e08: 81 8c 00 0c              lwz      r12, 0xc(r12) */
/* 0x807a9e0c: 7d 89 03 a6              mtctr    r12 */
/* 0x807a9e10: 4e 80 04 21              bctrl     */
/* 0x807a9e14: 80 7e 00 a4              lwz      r3, 0xa4(r30) */
/* 0x807a9e18: 4b fe 03 71              bl       0x8078a188 */
/* 0x807a9e1c: 80 7e 03 30              lwz      r3, 0x330(r30) */
/* 0x807a9e20: 38 81 00 08              addi     r4, r1, 8 */
/* 0x807a9e24: c0 1f 01 98              lfs      f0, 0x198(r31) */
#endif


/* === DISASSEMBLY === */

; Function: ItemObjFib_makeArray
; Demangled: ItemObjFib_makeArray
; Address: 0x807a9d90  (.text+0x2974f4)
; Size: 152 bytes

  0x807a9d90:  lwz      r3, 0(r5)
  0x807a9d94:  lwz      r3, 0x74(r3)
  0x807a9d98:  bl       0x8068f828
  0x807a9d9c:  lwz      r0, 0x78(r30)
  0x807a9da0:  li       r29, 2
  0x807a9da4:  rlwinm.  r0, r0, 0, 0x10, 0x10
  0x807a9da8:  bne      0x807a9db4
  0x807a9dac:  lbz      r4, 0x6c(r30)
  0x807a9db0:  b        0x807a9db8
  0x807a9db4:  li       r4, 0xc
  0x807a9db8:  cmplwi   r4, 0xc
  0x807a9dbc:  bge      0x807a9dfc
  0x807a9dc0:  lis      r3, 0
  0x807a9dc4:  lbz      r0, 0(r3)
  0x807a9dc8:  cmpwi    r0, 0
  0x807a9dcc:  beq      0x807a9dfc
  0x807a9dd0:  lis      r3, 0
  0x807a9dd4:  mulli    r0, r4, 0xf0
  0x807a9dd8:  lwz      r3, 0(r3)
  0x807a9ddc:  add      r3, r3, r0
  0x807a9de0:  lwz      r0, 0xf4(r3)
  0x807a9de4:  cmpwi    r0, 0
  0x807a9de8:  bne      0x807a9df0
  0x807a9dec:  li       r29, 3
  0x807a9df0:  cmpwi    r0, 1
  0x807a9df4:  bne      0x807a9dfc
  0x807a9df8:  li       r29, 4
  0x807a9dfc:  lwz      r3, 0x330(r30)
  0x807a9e00:  li       r4, 1
  0x807a9e04:  lwz      r12, 0(r3)
  0x807a9e08:  lwz      r12, 0xc(r12)
  0x807a9e0c:  mtctr    r12
  0x807a9e10:  bctrl    
  0x807a9e14:  lwz      r3, 0xa4(r30)
  0x807a9e18:  bl       0x8078a188
  0x807a9e1c:  lwz      r3, 0x330(r30)
  0x807a9e20:  addi     r4, r1, 8
  0x807a9e24:  lfs      f0, 0x198(r31)
