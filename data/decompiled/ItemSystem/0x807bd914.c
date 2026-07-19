/**
 * ItemSlotData_decideItem
 * @addr 0x807bd914
 * @size 1188 bytes
 * @frame 0 bytes
 * @calls 3 function(s)
 */
void ItemSlotData_decideItem(void) {
    /* f1 = *(f32*)(r31+0x0) */
    /* r3, 0  (load upper immediate) */
    /* f0 = *(f32*)(r31+0xc) */
    /* li r0, 0 */
    /* r1+0x78 = r0 */
    /* r3 = r3+0x0 */
    /* *(f32*)(r1+0x28) = f1 */
    /* *(f32*)(r1+0x24) = f1 */
    /* *(f32*)(r1+0x20) = f1 */
    /* *(f32*)(r1+0x34) = f1 */
    /* *(f32*)(r1+0x30) = f1 */
    /* *(f32*)(r1+0x2c) = f1 */
    /* *(f32*)(r1+0x70) = f0 */
    /* *(f32*)(r1+0x6c) = f0 */
    /* *(f32*)(r1+0x68) = f0 */
    /* *(f32*)(r1+0x74) = f1 */
    /* r0 = r3+0x8 */
    /* cmpwi r0, 0 */
    /* if (cr0 ==) goto 0x807bd968 */
    /* addi r0, r26, 4 */
    /* r3+0xc = r0 */
    /* fmr f2, f31 */
    /* r4 = r26+0x0 */
    /* f1 = *(f32*)(r26+0x64) */
    /* r7 = r28 */
    /* r9 = r30 */
    /* addi r5, r1, 0x14 */
    /* addi r6, r1, 8 */
    /* addi r8, r1, 0x20 */
    /* 0x807bbc8c() */
    /* cmpwi r3, 0 */
    /* if (cr0 ==) goto 0x807bd9b0 */
    /* r3 = r29 */
    /* addi r4, r1, 0x20 */
    /* addi r5, r26, 4 */
    /* addi r6, r26, 0x68 */
    /* 0x807ba4b4() */
    /* li r3, 1 */
    /* goto 0x807bd9e4 */
    /* li r3, 0 */
    /* goto 0x807bd9e4 */
    /* r3, 0  (load upper immediate) */
    /* fmr f2, f31 */
    /* r3 = r3+0x0 */
    /* r7 = r28 */
    /* r4 = r26+0x0 */
    /* r8 = r29 */
    /* f1 = *(f32*)(r26+0x64) */
    /* r9 = r30 */
    /* addi r5, r1, 0x14 */
    /* addi r6, r1, 8 */
    /* 0x807bbc8c() */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x807bd914: c0 3f 00 00              lfs      f1, 0(r31) */
/* 0x807bd918: 3c 60 00 00              lis      r3, 0 */
/* 0x807bd91c: c0 1f 00 0c              lfs      f0, 0xc(r31) */
/* 0x807bd920: 38 00 00 00              li       r0, 0 */
/* 0x807bd924: 90 01 00 78              stw      r0, 0x78(r1) */
/* 0x807bd928: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x807bd92c: d0 21 00 28              stfs     f1, 0x28(r1) */
/* 0x807bd930: d0 21 00 24              stfs     f1, 0x24(r1) */
/* 0x807bd934: d0 21 00 20              stfs     f1, 0x20(r1) */
/* 0x807bd938: d0 21 00 34              stfs     f1, 0x34(r1) */
/* 0x807bd93c: d0 21 00 30              stfs     f1, 0x30(r1) */
/* 0x807bd940: d0 21 00 2c              stfs     f1, 0x2c(r1) */
/* 0x807bd944: d0 01 00 70              stfs     f0, 0x70(r1) */
/* 0x807bd948: d0 01 00 6c              stfs     f0, 0x6c(r1) */
/* 0x807bd94c: d0 01 00 68              stfs     f0, 0x68(r1) */
/* 0x807bd950: d0 21 00 74              stfs     f1, 0x74(r1) */
/* 0x807bd954: 80 03 00 08              lwz      r0, 8(r3) */
/* 0x807bd958: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x807bd95c: 41 82 00 0c              beq      0x807bd968 */
/* 0x807bd960: 38 1a 00 04              addi     r0, r26, 4 */
/* 0x807bd964: 90 03 00 0c              stw      r0, 0xc(r3) */
/* 0x807bd968: fc 40 f8 90              fmr      f2, f31 */
/* 0x807bd96c: 80 9a 00 00              lwz      r4, 0(r26) */
/* 0x807bd970: c0 3a 00 64              lfs      f1, 0x64(r26) */
/* 0x807bd974: 7f 87 e3 78              mr       r7, r28 */
/* 0x807bd978: 7f c9 f3 78              mr       r9, r30 */
/* 0x807bd97c: 38 a1 00 14              addi     r5, r1, 0x14 */
/* 0x807bd980: 38 c1 00 08              addi     r6, r1, 8 */
/* 0x807bd984: 39 01 00 20              addi     r8, r1, 0x20 */
/* 0x807bd988: 4b ff e3 05              bl       0x807bbc8c */
/* 0x807bd98c: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x807bd990: 41 82 00 20              beq      0x807bd9b0 */
/* 0x807bd994: 7f a3 eb 78              mr       r3, r29 */
/* 0x807bd998: 38 81 00 20              addi     r4, r1, 0x20 */
/* 0x807bd99c: 38 ba 00 04              addi     r5, r26, 4 */
/* 0x807bd9a0: 38 da 00 68              addi     r6, r26, 0x68 */
/* 0x807bd9a4: 4b ff cb 11              bl       0x807ba4b4 */
/* 0x807bd9a8: 38 60 00 01              li       r3, 1 */
/* 0x807bd9ac: 48 00 00 38              b        0x807bd9e4 */
/* 0x807bd9b0: 38 60 00 00              li       r3, 0 */
/* 0x807bd9b4: 48 00 00 30              b        0x807bd9e4 */
/* 0x807bd9b8: 3c 60 00 00              lis      r3, 0 */
/* 0x807bd9bc: fc 40 f8 90              fmr      f2, f31 */
/* 0x807bd9c0: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x807bd9c4: 7f 87 e3 78              mr       r7, r28 */
/* 0x807bd9c8: 80 9a 00 00              lwz      r4, 0(r26) */
/* 0x807bd9cc: 7f a8 eb 78              mr       r8, r29 */
/* 0x807bd9d0: c0 3a 00 64              lfs      f1, 0x64(r26) */
/* 0x807bd9d4: 7f c9 f3 78              mr       r9, r30 */
/* 0x807bd9d8: 38 a1 00 14              addi     r5, r1, 0x14 */
/* 0x807bd9dc: 38 c1 00 08              addi     r6, r1, 8 */
/* 0x807bd9e0: 4b ff e2 ad              bl       0x807bbc8c */
#endif


/* === DISASSEMBLY === */

; Function: ItemSlotData_decideItem
; Demangled: ItemSlotData_decideItem
; Address: 0x807bd914  (.text+0x2ab078)
; Size: 1188 bytes

  0x807bd914:  lfs      f1, 0(r31)
  0x807bd918:  lis      r3, 0
  0x807bd91c:  lfs      f0, 0xc(r31)
  0x807bd920:  li       r0, 0
  0x807bd924:  stw      r0, 0x78(r1)
  0x807bd928:  lwz      r3, 0(r3)
  0x807bd92c:  stfs     f1, 0x28(r1)
  0x807bd930:  stfs     f1, 0x24(r1)
  0x807bd934:  stfs     f1, 0x20(r1)
  0x807bd938:  stfs     f1, 0x34(r1)
  0x807bd93c:  stfs     f1, 0x30(r1)
  0x807bd940:  stfs     f1, 0x2c(r1)
  0x807bd944:  stfs     f0, 0x70(r1)
  0x807bd948:  stfs     f0, 0x6c(r1)
  0x807bd94c:  stfs     f0, 0x68(r1)
  0x807bd950:  stfs     f1, 0x74(r1)
  0x807bd954:  lwz      r0, 8(r3)
  0x807bd958:  cmpwi    r0, 0
  0x807bd95c:  beq      0x807bd968
  0x807bd960:  addi     r0, r26, 4
  0x807bd964:  stw      r0, 0xc(r3)
  0x807bd968:  fmr      f2, f31
  0x807bd96c:  lwz      r4, 0(r26)
  0x807bd970:  lfs      f1, 0x64(r26)
  0x807bd974:  mr       r7, r28
  0x807bd978:  mr       r9, r30
  0x807bd97c:  addi     r5, r1, 0x14
  0x807bd980:  addi     r6, r1, 8
  0x807bd984:  addi     r8, r1, 0x20
  0x807bd988:  bl       0x807bbc8c
  0x807bd98c:  cmpwi    r3, 0
  0x807bd990:  beq      0x807bd9b0
  0x807bd994:  mr       r3, r29
  0x807bd998:  addi     r4, r1, 0x20
  0x807bd99c:  addi     r5, r26, 4
  0x807bd9a0:  addi     r6, r26, 0x68
  0x807bd9a4:  bl       0x807ba4b4
  0x807bd9a8:  li       r3, 1
  0x807bd9ac:  b        0x807bd9e4
  0x807bd9b0:  li       r3, 0
  0x807bd9b4:  b        0x807bd9e4
  0x807bd9b8:  lis      r3, 0
  0x807bd9bc:  fmr      f2, f31
  0x807bd9c0:  lwz      r3, 0(r3)
  0x807bd9c4:  mr       r7, r28
  0x807bd9c8:  lwz      r4, 0(r26)
  0x807bd9cc:  mr       r8, r29
  0x807bd9d0:  lfs      f1, 0x64(r26)
  0x807bd9d4:  mr       r9, r30
  0x807bd9d8:  addi     r5, r1, 0x14
  0x807bd9dc:  addi     r6, r1, 8
  0x807bd9e0:  bl       0x807bbc8c
