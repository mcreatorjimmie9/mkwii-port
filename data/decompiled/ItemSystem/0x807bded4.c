/**
 * ItemSlotData_updateTimers
 * @addr 0x807bded4
 * @size 168 bytes
 * @frame 160 bytes
 * @calls 5 function(s)
 */
void ItemSlotData_updateTimers(void) {
    /* 0x807bc138() */
    /* cmpwi r3, 0 */
    /* if (cr0 ==) goto 0x807bdefc */
    /* r3 = r29 */
    /* addi r4, r1, 0x20 */
    /* addi r5, r26, 4 */
    /* addi r6, r26, 0x68 */
    /* 0x807ba4b4() */
    /* li r3, 1 */
    /* goto 0x807bdf2c */
    /* li r3, 0 */
    /* goto 0x807bdf2c */
    /* r3, 0  (load upper immediate) */
    /* r4 = r26+0x0 */
    /* r3 = r3+0x0 */
    /* r7 = r28 */
    /* f1 = *(f32*)(r26+0x64) */
    /* r8 = r29 */
    /* r9 = r30 */
    /* addi r5, r1, 0x14 */
    /* addi r6, r1, 8 */
    /* 0x807bc138() */
    /* addi r11, r1, 0xa0 */
    /* 0x80555bf8() */
    /* r0 = stack[0xa4] */
    /* mtlr r0 */
    /* addi r1, r1, 0xa0 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x807bded4: 4b ff e2 65              bl       0x807bc138 */
/* 0x807bded8: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x807bdedc: 41 82 00 20              beq      0x807bdefc */
/* 0x807bdee0: 7f a3 eb 78              mr       r3, r29 */
/* 0x807bdee4: 38 81 00 20              addi     r4, r1, 0x20 */
/* 0x807bdee8: 38 ba 00 04              addi     r5, r26, 4 */
/* 0x807bdeec: 38 da 00 68              addi     r6, r26, 0x68 */
/* 0x807bdef0: 4b ff c5 c5              bl       0x807ba4b4 */
/* 0x807bdef4: 38 60 00 01              li       r3, 1 */
/* 0x807bdef8: 48 00 00 34              b        0x807bdf2c */
/* 0x807bdefc: 38 60 00 00              li       r3, 0 */
/* 0x807bdf00: 48 00 00 2c              b        0x807bdf2c */
/* 0x807bdf04: 3c 60 00 00              lis      r3, 0 */
/* 0x807bdf08: 80 9a 00 00              lwz      r4, 0(r26) */
/* 0x807bdf0c: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x807bdf10: 7f 87 e3 78              mr       r7, r28 */
/* 0x807bdf14: c0 3a 00 64              lfs      f1, 0x64(r26) */
/* 0x807bdf18: 7f a8 eb 78              mr       r8, r29 */
/* 0x807bdf1c: 7f c9 f3 78              mr       r9, r30 */
/* 0x807bdf20: 38 a1 00 14              addi     r5, r1, 0x14 */
/* 0x807bdf24: 38 c1 00 08              addi     r6, r1, 8 */
/* 0x807bdf28: 4b ff e2 11              bl       0x807bc138 */
/* 0x807bdf2c: 39 61 00 a0              addi     r11, r1, 0xa0 */
/* 0x807bdf30: 4b d9 7c c9              bl       0x80555bf8 */
/* 0x807bdf34: 80 01 00 a4              lwz      r0, 0xa4(r1) */
/* 0x807bdf38: 7c 08 03 a6              mtlr     r0 */
/* 0x807bdf3c: 38 21 00 a0              addi     r1, r1, 0xa0 */
/* 0x807bdf40: 4e 80 00 20              blr       */
/* 0x807bdf44: 94 21 ff 60              stwu     r1, -0xa0(r1) */
/* 0x807bdf48: 7c 08 02 a6              mflr     r0 */
/* 0x807bdf4c: 90 01 00 a4              stw      r0, 0xa4(r1) */
/* 0x807bdf50: 39 61 00 a0              addi     r11, r1, 0xa0 */
/* 0x807bdf54: 4b d9 7c a5              bl       0x80555bf8 */
/* 0x807bdf58: 81 23 00 00              lwz      r9, 0(r3) */
/* 0x807bdf5c: 3f e0 00 00              lis      r31, 0 */
/* 0x807bdf60: 7c 7a 1b 78              mr       r26, r3 */
/* 0x807bdf64: 7c bb 2b 78              mr       r27, r5 */
/* 0x807bdf68: a0 09 00 8c              lhz      r0, 0x8c(r9) */
/* 0x807bdf6c: 7c dc 33 78              mr       r28, r6 */
/* 0x807bdf70: 7c fd 3b 78              mr       r29, r7 */
/* 0x807bdf74: 7d 1e 43 78              mr       r30, r8 */
/* 0x807bdf78: 2c 00 00 00              cmpwi    r0, 0 */
#endif


/* === DISASSEMBLY === */

; Function: ItemSlotData_updateTimers
; Demangled: ItemSlotData_updateTimers
; Address: 0x807bded4  (.text+0x2ab638)
; Size: 168 bytes

  0x807bded4:  bl       0x807bc138
  0x807bded8:  cmpwi    r3, 0
  0x807bdedc:  beq      0x807bdefc
  0x807bdee0:  mr       r3, r29
  0x807bdee4:  addi     r4, r1, 0x20
  0x807bdee8:  addi     r5, r26, 4
  0x807bdeec:  addi     r6, r26, 0x68
  0x807bdef0:  bl       0x807ba4b4
  0x807bdef4:  li       r3, 1
  0x807bdef8:  b        0x807bdf2c
  0x807bdefc:  li       r3, 0
  0x807bdf00:  b        0x807bdf2c
  0x807bdf04:  lis      r3, 0
  0x807bdf08:  lwz      r4, 0(r26)
  0x807bdf0c:  lwz      r3, 0(r3)
  0x807bdf10:  mr       r7, r28
  0x807bdf14:  lfs      f1, 0x64(r26)
  0x807bdf18:  mr       r8, r29
  0x807bdf1c:  mr       r9, r30
  0x807bdf20:  addi     r5, r1, 0x14
  0x807bdf24:  addi     r6, r1, 8
  0x807bdf28:  bl       0x807bc138
  0x807bdf2c:  addi     r11, r1, 0xa0
  0x807bdf30:  bl       0x80555bf8
  0x807bdf34:  lwz      r0, 0xa4(r1)
  0x807bdf38:  mtlr     r0
  0x807bdf3c:  addi     r1, r1, 0xa0
  0x807bdf40:  blr      
  0x807bdf44:  stwu     r1, -0xa0(r1)
  0x807bdf48:  mflr     r0
  0x807bdf4c:  stw      r0, 0xa4(r1)
  0x807bdf50:  addi     r11, r1, 0xa0
  0x807bdf54:  bl       0x80555bf8
  0x807bdf58:  lwz      r9, 0(r3)
  0x807bdf5c:  lis      r31, 0
  0x807bdf60:  mr       r26, r3
  0x807bdf64:  mr       r27, r5
  0x807bdf68:  lhz      r0, 0x8c(r9)
  0x807bdf6c:  mr       r28, r6
  0x807bdf70:  mr       r29, r7
  0x807bdf74:  mr       r30, r8
  0x807bdf78:  cmpwi    r0, 0
