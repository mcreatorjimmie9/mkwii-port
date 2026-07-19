// ItemSlotData implementation — 4 functions
#include "ItemSlotData.hpp"

// Address: 0x807bd914 — ItemSlotData_decideItem (certain)
// Source: snailspeed3/mkw RMCP01 StaticR.rel module symbols (exact address match)
// Size: 1188 bytes
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

// Address: 0x807bd208 — ItemSlotData_scaleTableForPlayerCount (certain)
// Source: snailspeed3/mkw RMCP01 StaticR.rel module symbols (exact address match)
// Size: 352 bytes
/**
 * ItemSlotData_scaleTableForPlayerCount
 * @addr 0x807bd208
 * @size 352 bytes
 * @frame 128 bytes
 * @calls 7 function(s)
 */
void ItemSlotData_scaleTableForPlayerCount(void) {
    /* r4 = r27 */
    /* addi r3, r26, 0x34 */
    /* addi r5, r1, 8 */
    /* 0x80555bf8() */
    /* goto 0x807bd23c */
    /* r4, 0  (load upper immediate) */
    /* addi r3, r4, 0 */
    /* f2 = *(f32*)(r4+0x0) */
    /* f1 = *(f32*)(r3+0x4) */
    /* f0 = *(f32*)(r3+0x8) */
    /* *(f32*)(r1+0x8) = f2 */
    /* *(f32*)(r1+0xc) = f1 */
    /* *(f32*)(r1+0x10) = f0 */
    /* cmpwi r29, 0 */
    /* if (cr0 ==) goto 0x807bd2e4 */
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
    /* if (cr0 ==) goto 0x807bd298 */
    /* addi r0, r26, 4 */
    /* r3+0xc = r0 */
    /* r4 = r26+0x0 */
    /* r7 = r28 */
    /* f1 = *(f32*)(r26+0x64) */
    /* r9 = r30 */
    /* addi r5, r1, 0x14 */
    /* addi r6, r1, 8 */
    /* addi r8, r1, 0x20 */
    /* 0x807bb35c() */
    /* cmpwi r3, 0 */
    /* if (cr0 ==) goto 0x807bd2dc */
    /* r3 = r29 */
    /* addi r4, r1, 0x20 */
    /* addi r5, r26, 4 */
    /* addi r6, r26, 0x68 */
    /* 0x807ba4b4() */
    /* li r3, 1 */
    /* goto 0x807bd30c */
    /* li r3, 0 */
    /* goto 0x807bd30c */
    /* r3, 0  (load upper immediate) */
    /* r4 = r26+0x0 */
    /* r3 = r3+0x0 */
    /* r7 = r28 */
    /* f1 = *(f32*)(r26+0x64) */
    /* r8 = r29 */
    /* r9 = r30 */
    /* addi r5, r1, 0x14 */
    /* addi r6, r1, 8 */
    /* 0x807bb35c() */
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
/* 0x807bd208: 7f 64 db 78              mr       r4, r27 */
/* 0x807bd20c: 38 7a 00 34              addi     r3, r26, 0x34 */
/* 0x807bd210: 38 a1 00 08              addi     r5, r1, 8 */
/* 0x807bd214: 4b d9 89 e5              bl       0x80555bf8 */
/* 0x807bd218: 48 00 00 24              b        0x807bd23c */
/* 0x807bd21c: 3c 80 00 00              lis      r4, 0 */
/* 0x807bd220: 38 64 00 00              addi     r3, r4, 0 */
/* 0x807bd224: c0 44 00 00              lfs      f2, 0(r4) */
/* 0x807bd228: c0 23 00 04              lfs      f1, 4(r3) */
/* 0x807bd22c: c0 03 00 08              lfs      f0, 8(r3) */
/* 0x807bd230: d0 41 00 08              stfs     f2, 8(r1) */
/* 0x807bd234: d0 21 00 0c              stfs     f1, 0xc(r1) */
/* 0x807bd238: d0 01 00 10              stfs     f0, 0x10(r1) */
/* 0x807bd23c: 2c 1d 00 00              cmpwi    r29, 0 */
/* 0x807bd240: 41 82 00 a4              beq      0x807bd2e4 */
/* 0x807bd244: c0 3f 00 00              lfs      f1, 0(r31) */
/* 0x807bd248: 3c 60 00 00              lis      r3, 0 */
/* 0x807bd24c: c0 1f 00 0c              lfs      f0, 0xc(r31) */
/* 0x807bd250: 38 00 00 00              li       r0, 0 */
/* 0x807bd254: 90 01 00 78              stw      r0, 0x78(r1) */
/* 0x807bd258: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x807bd25c: d0 21 00 28              stfs     f1, 0x28(r1) */
/* 0x807bd260: d0 21 00 24              stfs     f1, 0x24(r1) */
/* 0x807bd264: d0 21 00 20              stfs     f1, 0x20(r1) */
/* 0x807bd268: d0 21 00 34              stfs     f1, 0x34(r1) */
/* 0x807bd26c: d0 21 00 30              stfs     f1, 0x30(r1) */
/* 0x807bd270: d0 21 00 2c              stfs     f1, 0x2c(r1) */
/* 0x807bd274: d0 01 00 70              stfs     f0, 0x70(r1) */
/* 0x807bd278: d0 01 00 6c              stfs     f0, 0x6c(r1) */
/* 0x807bd27c: d0 01 00 68              stfs     f0, 0x68(r1) */
/* 0x807bd280: d0 21 00 74              stfs     f1, 0x74(r1) */
/* 0x807bd284: 80 03 00 08              lwz      r0, 8(r3) */
/* 0x807bd288: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x807bd28c: 41 82 00 0c              beq      0x807bd298 */
/* 0x807bd290: 38 1a 00 04              addi     r0, r26, 4 */
/* 0x807bd294: 90 03 00 0c              stw      r0, 0xc(r3) */
/* 0x807bd298: 80 9a 00 00              lwz      r4, 0(r26) */
/* 0x807bd29c: 7f 87 e3 78              mr       r7, r28 */
/* 0x807bd2a0: c0 3a 00 64              lfs      f1, 0x64(r26) */
/* 0x807bd2a4: 7f c9 f3 78              mr       r9, r30 */
/* 0x807bd2a8: 38 a1 00 14              addi     r5, r1, 0x14 */
/* 0x807bd2ac: 38 c1 00 08              addi     r6, r1, 8 */
/* 0x807bd2b0: 39 01 00 20              addi     r8, r1, 0x20 */
/* 0x807bd2b4: 4b ff e0 a9              bl       0x807bb35c */
/* 0x807bd2b8: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x807bd2bc: 41 82 00 20              beq      0x807bd2dc */
/* 0x807bd2c0: 7f a3 eb 78              mr       r3, r29 */
/* 0x807bd2c4: 38 81 00 20              addi     r4, r1, 0x20 */
/* 0x807bd2c8: 38 ba 00 04              addi     r5, r26, 4 */
/* 0x807bd2cc: 38 da 00 68              addi     r6, r26, 0x68 */
/* 0x807bd2d0: 4b ff d1 e5              bl       0x807ba4b4 */
/* 0x807bd2d4: 38 60 00 01              li       r3, 1 */
/* 0x807bd2d8: 48 00 00 34              b        0x807bd30c */
/* 0x807bd2dc: 38 60 00 00              li       r3, 0 */
/* 0x807bd2e0: 48 00 00 2c              b        0x807bd30c */
/* 0x807bd2e4: 3c 60 00 00              lis      r3, 0 */
/* 0x807bd2e8: 80 9a 00 00              lwz      r4, 0(r26) */
/* 0x807bd2ec: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x807bd2f0: 7f 87 e3 78              mr       r7, r28 */
/* 0x807bd2f4: c0 3a 00 64              lfs      f1, 0x64(r26) */
/* 0x807bd2f8: 7f a8 eb 78              mr       r8, r29 */
/* 0x807bd2fc: 7f c9 f3 78              mr       r9, r30 */
/* 0x807bd300: 38 a1 00 14              addi     r5, r1, 0x14 */
/* 0x807bd304: 38 c1 00 08              addi     r6, r1, 8 */
/* 0x807bd308: 4b ff e0 55              bl       0x807bb35c */
/* 0x807bd30c: 39 61 00 a0              addi     r11, r1, 0xa0 */
/* 0x807bd310: 4b d9 88 e9              bl       0x80555bf8 */
/* 0x807bd314: 80 01 00 a4              lwz      r0, 0xa4(r1) */
/* 0x807bd318: 7c 08 03 a6              mtlr     r0 */
/* 0x807bd31c: 38 21 00 a0              addi     r1, r1, 0xa0 */
/* 0x807bd320: 4e 80 00 20              blr       */
/* 0x807bd324: 94 21 ff 80              stwu     r1, -0x80(r1) */
/* 0x807bd328: 7c 08 02 a6              mflr     r0 */
/* 0x807bd32c: 90 01 00 84              stw      r0, 0x84(r1) */
/* 0x807bd330: db e1 00 70              stfd     f31, 0x70(r1) */
/* 0x807bd334: f3 e1 00 78              xxsel    vs31, vs1, vs0, v1 */
/* 0x807bd338: 39 61 00 70              addi     r11, r1, 0x70 */
/* 0x807bd33c: 4b d9 88 bd              bl       0x80555bf8 */
/* 0x807bd340: ff e0 08 90              fmr      f31, f1 */
/* 0x807bd344: 7c 7b 1b 78              mr       r27, r3 */
/* 0x807bd348: 7c bc 2b 78              mr       r28, r5 */
/* 0x807bd34c: 7c dd 33 78              mr       r29, r6 */
/* 0x807bd350: 7c fe 3b 78              mr       r30, r7 */
/* 0x807bd354: 7d 1f 43 78              mr       r31, r8 */
/* 0x807bd358: 38 63 00 34              addi     r3, r3, 0x34 */
/* 0x807bd35c: 38 a1 00 20              addi     r5, r1, 0x20 */
/* 0x807bd360: 4b d9 88 99              bl       0x80555bf8 */
/* 0x807bd364: 3c 60 00 00              lis      r3, 0 */
#endif


/* === DISASSEMBLY === */


  0x807bd208:  mr       r4, r27
  0x807bd20c:  addi     r3, r26, 0x34
  0x807bd210:  addi     r5, r1, 8
  0x807bd214:  bl       0x80555bf8
  0x807bd218:  b        0x807bd23c
  0x807bd21c:  lis      r4, 0
  0x807bd220:  addi     r3, r4, 0
  0x807bd224:  lfs      f2, 0(r4)
  0x807bd228:  lfs      f1, 4(r3)
  0x807bd22c:  lfs      f0, 8(r3)
  0x807bd230:  stfs     f2, 8(r1)
  0x807bd234:  stfs     f1, 0xc(r1)
  0x807bd238:  stfs     f0, 0x10(r1)
  0x807bd23c:  cmpwi    r29, 0
  0x807bd240:  beq      0x807bd2e4
  0x807bd244:  lfs      f1, 0(r31)
  0x807bd248:  lis      r3, 0
  0x807bd24c:  lfs      f0, 0xc(r31)
  0x807bd250:  li       r0, 0
  0x807bd254:  stw      r0, 0x78(r1)
  0x807bd258:  lwz      r3, 0(r3)
  0x807bd25c:  stfs     f1, 0x28(r1)
  0x807bd260:  stfs     f1, 0x24(r1)
  0x807bd264:  stfs     f1, 0x20(r1)
  0x807bd268:  stfs     f1, 0x34(r1)
  0x807bd26c:  stfs     f1, 0x30(r1)
  0x807bd270:  stfs     f1, 0x2c(r1)
  0x807bd274:  stfs     f0, 0x70(r1)
  0x807bd278:  stfs     f0, 0x6c(r1)
  0x807bd27c:  stfs     f0, 0x68(r1)
  0x807bd280:  stfs     f1, 0x74(r1)
  0x807bd284:  lwz      r0, 8(r3)
  0x807bd288:  cmpwi    r0, 0
  0x807bd28c:  beq      0x807bd298
  0x807bd290:  addi     r0, r26, 4
  0x807bd294:  stw      r0, 0xc(r3)
  0x807bd298:  lwz      r4, 0(r26)
  0x807bd29c:  mr       r7, r28
  0x807bd2a0:  lfs      f1, 0x64(r26)
  0x807bd2a4:  mr       r9, r30
  0x807bd2a8:  addi     r5, r1, 0x14
  0x807bd2ac:  addi     r6, r1, 8
  0x807bd2b0:  addi     r8, r1, 0x20
  0x807bd2b4:  bl       0x807bb35c
  0x807bd2b8:  cmpwi    r3, 0
  0x807bd2bc:  beq      0x807bd2dc
  0x807bd2c0:  mr       r3, r29
  0x807bd2c4:  addi     r4, r1, 0x20
  0x807bd2c8:  addi     r5, r26, 4
  0x807bd2cc:  addi     r6, r26, 0x68
  0x807bd2d0:  bl       0x807ba4b4
  0x807bd2d4:  li       r3, 1
  0x807bd2d8:  b        0x807bd30c
  0x807bd2dc:  li       r3, 0
  0x807bd2e0:  b        0x807bd30c
  0x807bd2e4:  lis      r3, 0
  0x807bd2e8:  lwz      r4, 0(r26)
  0x807bd2ec:  lwz      r3, 0(r3)
  0x807bd2f0:  mr       r7, r28
  0x807bd2f4:  lfs      f1, 0x64(r26)
  0x807bd2f8:  mr       r8, r29
  0x807bd2fc:  mr       r9, r30
  0x807bd300:  addi     r5, r1, 0x14
  0x807bd304:  addi     r6, r1, 8
  0x807bd308:  bl       0x807bb35c
  0x807bd30c:  addi     r11, r1, 0xa0
  0x807bd310:  bl       0x80555bf8
  0x807bd314:  lwz      r0, 0xa4(r1)
  0x807bd318:  mtlr     r0
  0x807bd31c:  addi     r1, r1, 0xa0
  0x807bd320:  blr      
  0x807bd324:  stwu     r1, -0x80(r1)
  0x807bd328:  mflr     r0
  0x807bd32c:  stw      r0, 0x84(r1)
  0x807bd330:  stfd     f31, 0x70(r1)
  0x807bd334:  xxsel    vs31, vs1, vs0, v1
  0x807bd338:  addi     r11, r1, 0x70
  0x807bd33c:  bl       0x80555bf8
  0x807bd340:  fmr      f31, f1
  0x807bd344:  mr       r27, r3
  0x807bd348:  mr       r28, r5
  0x807bd34c:  mr       r29, r6
  0x807bd350:  mr       r30, r7
  0x807bd354:  mr       r31, r8
  0x807bd358:  addi     r3, r3, 0x34
  0x807bd35c:  addi     r5, r1, 0x20
  0x807bd360:  bl       0x80555bf8
  0x807bd364:  lis      r3, 0

// Address: 0x807bd868 — ItemSlotData_checkSpawnTimer (certain)
// Source: snailspeed3/mkw RMCP01 StaticR.rel module symbols (exact address match)
// Size: 172 bytes
/**
 * ItemSlotData_checkSpawnTimer
 * @addr 0x807bd868
 * @size 172 bytes
 * @frame 176 bytes
 */
void ItemSlotData_checkSpawnTimer(void) {
    /* addi r1, r1, 0xb0 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x807bd868: 38 21 00 b0              addi     r1, r1, 0xb0 */
/* 0x807bd86c: 4e 80 00 20              blr       */
/* 0x807bd870: 94 21 ff 50              stwu     r1, -0xb0(r1) */
/* 0x807bd874: 7c 08 02 a6              mflr     r0 */
/* 0x807bd878: 90 01 00 b4              stw      r0, 0xb4(r1) */
/* 0x807bd87c: db e1 00 a0              stfd     f31, 0xa0(r1) */
#endif


/* === DISASSEMBLY === */


  0x807bd868:  addi     r1, r1, 0xb0
  0x807bd86c:  blr      
  0x807bd870:  stwu     r1, -0xb0(r1)
  0x807bd874:  mflr     r0
  0x807bd878:  stw      r0, 0xb4(r1)
  0x807bd87c:  stfd     f31, 0xa0(r1)

// Address: 0x807bded4 — ItemSlotData_updateTimers (certain)
// Source: snailspeed3/mkw RMCP01 StaticR.rel module symbols (exact address match)
// Size: 168 bytes
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
