/**
 * ItemHolderPlayerb4_use
 * @addr 0x80793df8
 * @size 760 bytes
 * @frame 0 bytes
 * @calls 8 function(s)
 */
void ItemHolderPlayerb4_use(void) {
    /* r3 = r3+0x0 */
    /* r0 = r3+0x42c */
    /* cmpwi r0, 0 */
    /* if (cr0 <=) goto 0x80793e20 */
    /* r0 = r18+0x14 */
    /* cmpwi r0, 0 */
    /* if (cr0 <=) goto 0x80793e20 */
    /* r3 = r18+0x4 */
    /* r3 = r3+0x0 */
    /* 0x8079d68c() */
    /* r3, 0  (load upper immediate) */
    /* r0 = r3+0x0 */
    /* cmpwi r0, 0 */
    /* if (cr0 !=) goto 0x80793e6c */
    /* li r17, 0 */
    /* goto 0x80793e60 */
    /* r3 = r18+0x4 */
    /* slwi r0, r17, 2 */
    /* li r4, 0 */
    /* lwzx r3, r3, r0 */
    /* 0x8079c848() */
    /* cmpwi r3, 0 */
    /* if (cr0 ==) goto 0x80793e5c */
    /* r22 = r18+0x14 */
    /* addi r17, r17, -1 */
    /* addi r17, r17, 1 */
    /* cmpw r17, r22 */
    /* if (cr0 <) goto 0x80793e38 */
    /* goto 0x807941b8 */
    /* r4, 0  (load upper immediate) */
    /* r3, 0  (load upper immediate) */
    /* f30 = *(f32*)(r4+0x0) */
    /* li r20, 0 */
    /* f31 = *(f32*)(r3+0x0) */
    /* r31, 0  (load upper immediate) */
    /* r26, 0  (load upper immediate) */
    /* r27, 0  (load upper immediate) */
    /* r25, 0x101  (load upper immediate) */
    /* r24, 0  (load upper immediate) */
    /* r28, 0  (load upper immediate) */
    /* r29, 0x4330  (load upper immediate) */
    /* r30, 0  (load upper immediate) */
    /* li r17, 0x14 */
    /* goto 0x807941b0 */
    /* r3 = r18+0x4 */
    /* slwi r0, r20, 2 */
    /* lwzx r21, r3, r0 */
    /* r3 = r21+0x7c */
    /* clrlwi. r0, r3, 0x1f */
    /* rlwinm r23, r3, 0x1e, 0x1f, 0x1f */
    /* if (cr0 ==) goto 0x80793f30 */
    /* r0 = r21+0x6c */
    /* li r3, 0 */
    /* r4 = r24+0x0 */
    /* slwi r0, r0, 2 */
    /* add r4, r4, r0 */
    /* r4 = r4+0x10 */
    /* r0 = r4+0x6dc */
    /* cmpwi r0, 0 */
    /* if (cr0 <=) goto 0x80793f00 */
    /* cmpwi r21, 0 */
    /* if (cr0 ==) goto 0x80793efc */
    /* r0 = r4+0x6e0 */
    /* cmplw r21, r0 */
    /* if (cr0 !=) goto 0x80793f00 */
    /* li r3, 1 */
    /* cmpwi r3, 0 */
    /* if (cr0 ==) goto 0x80793f30 */
    /* r5 = r21+0x6e */
    /* r3 = r21 */
    /* li r4, 0 */
    /* addi r0, r5, 1 */
    /* sth r0, 0x6e(r21) */
    /* r5 = r21+0x70 */
    /* addi r0, r5, 1 */
    /* sth r0, 0x70(r21) */
    /* 0x807a0304() */
    /* goto 0x807941ac */
    /* cmpwi r23, 0 */
    /* r4 = r21+0x70 */
    /* if (cr0 !=) goto 0x80794018 */
    /* cmpwi r4, 0 */
    /* if (cr0 >) goto 0x80794018 */
    /* if (cr0 >=) goto 0x80793fd8 */
    /* r0 = r21+0x160 */
    /* cmpwi r0, 0x3c */
    /* if (cr0 <=) goto 0x80793fd8 */
    /* r3 = r21+0xa4 */
    /* addi r4, r25, 0x101 */
    /* r0 = r3+0x20 */
    /* andc. r0, r4, r0 */
    /* if (cr0 !=) goto 0x80793fd8 */
    /* r0 = r26+0x0 */
    /* li r4, 0 */
    /* r3 = r21+0x8 */
    /* cmpwi r0, 0 */
    /* if (cr0 <=) goto 0x80793f8c */
    /* r0 = r27+0x0 */
    /* clrlwi r3, r3, 0x1e */
    /* cmplw r3, r0 */
    /* if (cr0 !=) goto 0x80793f90 */
    /* li r4, 1 */
    /* cmpwi r4, 0 */
    /* if (cr0 ==) goto 0x80793fd8 */
    /* r3 = r21+0x6e */
    /* addi r0, r3, 1 */
    /* sth r0, 0x6e(r21) */
    /* r3 = r21+0x70 */
    /* addi r0, r3, 1 */
    /* sth r0, 0x70(r21) */
    /* r0 = r21+0x7c */
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */
    /* if (cr0 ==) goto 0x80793fc8 */
    /* r3 = r21 */
    /* li r4, 0 */
    /* 0x807a0304() */
    /* r0 = r21+0x74 */
    /* ori r0, r0, 0x100 */
    /* r21+0x74 = r0 */
    /* goto 0x807941ac */
    /* r3 = r21 */
    /* li r4, 0 */
    /* 0x8079c848() */
    /* cmpwi r3, 0 */
    /* if (cr0 ==) goto 0x80793ff4 */
    /* r22 = r18+0x14 */
    /* addi r20, r20, -1 */
    /* r3 = r21+0x7c */
    /* clrlwi. r0, r3, 0x1f */
    /* if (cr0 ==) goto 0x807941ac */
    /* rlwinm. r0, r3, 0, 0x1c, 0x1c */
    /* if (cr0 ==) goto 0x807941ac */
    /* r3 = r21 */
    /* li r4, 0 */
    /* 0x807a0304() */
    /* goto 0x807941ac */
    /* r0 = r21+0xb0 */
    /* li r19, 1 */
    /* f29 = *(f32*)(r28+0x0) */
    /* cmpwi r0, 0 */
    /* if (cr0 !=) goto 0x80794038 */
    /* r0 = r18+0x0 */
    /* cmpwi r0, 5 */
    /* if (cr0 !=) goto 0x8079408c */
    /* cmpwi r23, 0 */
    /* if (cr0 ==) goto 0x80794064 */
    /* cmpwi r4, 0x3c */
    /* li r3, 0x3c */
    /* if (cr0 <) goto 0x80794050 */
    /* r3 = r4 */
    /* r0 = r21+0x7c */
    /* addi r19, r3, 1 */
    /* rlwinm r0, r0, 0, 0x1e, 0x1c */
    /* r21+0x7c = r0 */
    /* goto 0x8079408c */
    /* r0 = r18+0x0 */
    /* cmpwi r0, 5 */
    /* if (cr0 ==) goto 0x8079408c */
    /* cmpwi r0, 1 */
    /* if (cr0 ==) goto 0x8079408c */
    /* li r19, 2 */
    /* goto 0x80794084 */
    /* addi r19, r19, 1 */
    /* srawi. r4, r4, 3 */
    /* if (cr0 !=) goto 0x80794080 */
    /* r3 = r21 */
    /* li r4, 0 */
    /* 0x8079c4a0() */
    /* xoris r0, r19, 0x8000 */
    /* r1+0x1c = r0 */
    /* r3 = r30+0x0 */
    /* addi r4, r21, 0x44 */
    /* r1+0x18 = r29 */
    /* li r5, 0xe */
    /* f0 = *(f32*)(r1+0x18) */
    /* fsubs f0, f0, f30 */
    /* fmuls f0, f31, f0 */
    /* fadds f1, f0, f1 */
    /* 0x80788f4c() */
    /* r3 = r21+0x6e */
    /* addi r0, r3, 1 */
    /* sth r0, 0x6e(r21) */
    /* r3 = r21+0x70 */
    /* addi r0, r3, 1 */
    /* sth r0, 0x70(r21) */
    /* r3 = r21+0xbc */
    /* r0 = r21+0xc0 */
    /* r1+0xc = r0 */
    /* r1+0x8 = r3 */
    /* r0 = r21+0xc4 */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x80793df8: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x80793dfc: 80 03 04 2c              lwz      r0, 0x42c(r3) */
/* 0x80793e00: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x80793e04: 40 81 00 1c              ble      0x80793e20 */
/* 0x80793e08: 80 12 00 14              lwz      r0, 0x14(r18) */
/* 0x80793e0c: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x80793e10: 40 81 00 10              ble      0x80793e20 */
/* 0x80793e14: 80 72 00 04              lwz      r3, 4(r18) */
/* 0x80793e18: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x80793e1c: 48 00 98 71              bl       0x8079d68c */
/* 0x80793e20: 3c 60 00 00              lis      r3, 0 */
/* 0x80793e24: 88 03 00 00              lbz      r0, 0(r3) */
/* 0x80793e28: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x80793e2c: 40 82 00 40              bne      0x80793e6c */
/* 0x80793e30: 3a 20 00 00              li       r17, 0 */
/* 0x80793e34: 48 00 00 2c              b        0x80793e60 */
/* 0x80793e38: 80 72 00 04              lwz      r3, 4(r18) */
/* 0x80793e3c: 56 20 10 3a              slwi     r0, r17, 2 */
/* 0x80793e40: 38 80 00 00              li       r4, 0 */
/* 0x80793e44: 7c 63 00 2e              lwzx     r3, r3, r0 */
/* 0x80793e48: 48 00 8a 01              bl       0x8079c848 */
/* 0x80793e4c: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x80793e50: 41 82 00 0c              beq      0x80793e5c */
/* 0x80793e54: 82 d2 00 14              lwz      r22, 0x14(r18) */
/* 0x80793e58: 3a 31 ff ff              addi     r17, r17, -1 */
/* 0x80793e5c: 3a 31 00 01              addi     r17, r17, 1 */
/* 0x80793e60: 7c 11 b0 00              cmpw     r17, r22 */
/* 0x80793e64: 41 80 ff d4              blt      0x80793e38 */
/* 0x80793e68: 48 00 03 50              b        0x807941b8 */
/* 0x80793e6c: 3c 80 00 00              lis      r4, 0 */
/* 0x80793e70: 3c 60 00 00              lis      r3, 0 */
/* 0x80793e74: cb c4 00 00              lfd      f30, 0(r4) */
/* 0x80793e78: 3a 80 00 00              li       r20, 0 */
/* 0x80793e7c: c3 e3 00 00              lfs      f31, 0(r3) */
/* 0x80793e80: 3f e0 00 00              lis      r31, 0 */
/* 0x80793e84: 3f 40 00 00              lis      r26, 0 */
/* 0x80793e88: 3f 60 00 00              lis      r27, 0 */
/* 0x80793e8c: 3f 20 01 01              lis      r25, 0x101 */
/* 0x80793e90: 3f 00 00 00              lis      r24, 0 */
/* 0x80793e94: 3f 80 00 00              lis      r28, 0 */
/* 0x80793e98: 3f a0 43 30              lis      r29, 0x4330 */
/* 0x80793e9c: 3f c0 00 00              lis      r30, 0 */
/* 0x80793ea0: 3a 20 00 14              li       r17, 0x14 */
/* 0x80793ea4: 48 00 03 0c              b        0x807941b0 */
/* 0x80793ea8: 80 72 00 04              lwz      r3, 4(r18) */
/* 0x80793eac: 56 80 10 3a              slwi     r0, r20, 2 */
/* 0x80793eb0: 7e a3 00 2e              lwzx     r21, r3, r0 */
/* 0x80793eb4: 80 75 00 7c              lwz      r3, 0x7c(r21) */
/* 0x80793eb8: 54 60 07 ff              clrlwi.  r0, r3, 0x1f */
/* 0x80793ebc: 54 77 f7 fe              rlwinm   r23, r3, 0x1e, 0x1f, 0x1f */
/* 0x80793ec0: 41 82 00 70              beq      0x80793f30 */
/* 0x80793ec4: 88 15 00 6c              lbz      r0, 0x6c(r21) */
/* 0x80793ec8: 38 60 00 00              li       r3, 0 */
/* 0x80793ecc: 80 98 00 00              lwz      r4, 0(r24) */
/* 0x80793ed0: 54 00 10 3a              slwi     r0, r0, 2 */
/* 0x80793ed4: 7c 84 02 14              add      r4, r4, r0 */
/* 0x80793ed8: 80 84 00 10              lwz      r4, 0x10(r4) */
/* 0x80793edc: 80 04 06 dc              lwz      r0, 0x6dc(r4) */
/* 0x80793ee0: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x80793ee4: 40 81 00 1c              ble      0x80793f00 */
/* 0x80793ee8: 2c 15 00 00              cmpwi    r21, 0 */
/* 0x80793eec: 41 82 00 10              beq      0x80793efc */
/* 0x80793ef0: 80 04 06 e0              lwz      r0, 0x6e0(r4) */
/* 0x80793ef4: 7c 15 00 40              cmplw    r21, r0 */
/* 0x80793ef8: 40 82 00 08              bne      0x80793f00 */
/* 0x80793efc: 38 60 00 01              li       r3, 1 */
/* 0x80793f00: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x80793f04: 41 82 00 2c              beq      0x80793f30 */
/* 0x80793f08: a8 b5 00 6e              lha      r5, 0x6e(r21) */
/* 0x80793f0c: 7e a3 ab 78              mr       r3, r21 */
/* 0x80793f10: 38 80 00 00              li       r4, 0 */
/* 0x80793f14: 38 05 00 01              addi     r0, r5, 1 */
/* 0x80793f18: b0 15 00 6e              sth      r0, 0x6e(r21) */
/* 0x80793f1c: a8 b5 00 70              lha      r5, 0x70(r21) */
/* 0x80793f20: 38 05 00 01              addi     r0, r5, 1 */
/* 0x80793f24: b0 15 00 70              sth      r0, 0x70(r21) */
/* 0x80793f28: 48 00 c3 dd              bl       0x807a0304 */
/* 0x80793f2c: 48 00 02 80              b        0x807941ac */
/* 0x80793f30: 2c 17 00 00              cmpwi    r23, 0 */
/* 0x80793f34: a8 95 00 70              lha      r4, 0x70(r21) */
/* 0x80793f38: 40 82 00 e0              bne      0x80794018 */
/* 0x80793f3c: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x80793f40: 41 81 00 d8              bgt      0x80794018 */
/* 0x80793f44: 40 80 00 94              bge      0x80793fd8 */
/* 0x80793f48: 80 15 01 60              lwz      r0, 0x160(r21) */
/* 0x80793f4c: 2c 00 00 3c              cmpwi    r0, 0x3c */
/* 0x80793f50: 40 81 00 88              ble      0x80793fd8 */
/* 0x80793f54: 80 75 00 a4              lwz      r3, 0xa4(r21) */
/* 0x80793f58: 38 99 01 01              addi     r4, r25, 0x101 */
/* 0x80793f5c: 80 03 00 20              lwz      r0, 0x20(r3) */
/* 0x80793f60: 7c 80 00 79              andc.    r0, r4, r0 */
/* 0x80793f64: 40 82 00 74              bne      0x80793fd8 */
/* 0x80793f68: 80 1a 00 00              lwz      r0, 0(r26) */
/* 0x80793f6c: 38 80 00 00              li       r4, 0 */
/* 0x80793f70: a8 75 00 08              lha      r3, 8(r21) */
/* 0x80793f74: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x80793f78: 40 81 00 14              ble      0x80793f8c */
/* 0x80793f7c: 80 1b 00 00              lwz      r0, 0(r27) */
/* 0x80793f80: 54 63 07 be              clrlwi   r3, r3, 0x1e */
/* 0x80793f84: 7c 03 00 40              cmplw    r3, r0 */
/* 0x80793f88: 40 82 00 08              bne      0x80793f90 */
/* 0x80793f8c: 38 80 00 01              li       r4, 1 */
/* 0x80793f90: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x80793f94: 41 82 00 44              beq      0x80793fd8 */
/* 0x80793f98: a8 75 00 6e              lha      r3, 0x6e(r21) */
/* 0x80793f9c: 38 03 00 01              addi     r0, r3, 1 */
/* 0x80793fa0: b0 15 00 6e              sth      r0, 0x6e(r21) */
/* 0x80793fa4: a8 75 00 70              lha      r3, 0x70(r21) */
/* 0x80793fa8: 38 03 00 01              addi     r0, r3, 1 */
/* 0x80793fac: b0 15 00 70              sth      r0, 0x70(r21) */
/* 0x80793fb0: 80 15 00 7c              lwz      r0, 0x7c(r21) */
/* 0x80793fb4: 54 00 07 39              rlwinm.  r0, r0, 0, 0x1c, 0x1c */
/* 0x80793fb8: 41 82 00 10              beq      0x80793fc8 */
/* 0x80793fbc: 7e a3 ab 78              mr       r3, r21 */
/* 0x80793fc0: 38 80 00 00              li       r4, 0 */
/* 0x80793fc4: 48 00 c3 41              bl       0x807a0304 */
/* 0x80793fc8: 80 15 00 74              lwz      r0, 0x74(r21) */
/* 0x80793fcc: 60 00 01 00              ori      r0, r0, 0x100 */
/* 0x80793fd0: 90 15 00 74              stw      r0, 0x74(r21) */
/* 0x80793fd4: 48 00 01 d8              b        0x807941ac */
/* 0x80793fd8: 7e a3 ab 78              mr       r3, r21 */
/* 0x80793fdc: 38 80 00 00              li       r4, 0 */
/* 0x80793fe0: 48 00 88 69              bl       0x8079c848 */
/* 0x80793fe4: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x80793fe8: 41 82 00 0c              beq      0x80793ff4 */
/* 0x80793fec: 82 d2 00 14              lwz      r22, 0x14(r18) */
/* 0x80793ff0: 3a 94 ff ff              addi     r20, r20, -1 */
/* 0x80793ff4: 80 75 00 7c              lwz      r3, 0x7c(r21) */
/* 0x80793ff8: 54 60 07 ff              clrlwi.  r0, r3, 0x1f */
/* 0x80793ffc: 41 82 01 b0              beq      0x807941ac */
/* 0x80794000: 54 60 07 39              rlwinm.  r0, r3, 0, 0x1c, 0x1c */
/* 0x80794004: 41 82 01 a8              beq      0x807941ac */
/* 0x80794008: 7e a3 ab 78              mr       r3, r21 */
/* 0x8079400c: 38 80 00 00              li       r4, 0 */
/* 0x80794010: 48 00 c2 f5              bl       0x807a0304 */
/* 0x80794014: 48 00 01 98              b        0x807941ac */
/* 0x80794018: 80 15 00 b0              lwz      r0, 0xb0(r21) */
/* 0x8079401c: 3a 60 00 01              li       r19, 1 */
/* 0x80794020: c3 bc 00 00              lfs      f29, 0(r28) */
/* 0x80794024: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x80794028: 40 82 00 10              bne      0x80794038 */
/* 0x8079402c: 80 12 00 00              lwz      r0, 0(r18) */
/* 0x80794030: 2c 00 00 05              cmpwi    r0, 5 */
/* 0x80794034: 40 82 00 58              bne      0x8079408c */
/* 0x80794038: 2c 17 00 00              cmpwi    r23, 0 */
/* 0x8079403c: 41 82 00 28              beq      0x80794064 */
/* 0x80794040: 2c 04 00 3c              cmpwi    r4, 0x3c */
/* 0x80794044: 38 60 00 3c              li       r3, 0x3c */
/* 0x80794048: 41 80 00 08              blt      0x80794050 */
/* 0x8079404c: 7c 83 23 78              mr       r3, r4 */
/* 0x80794050: 80 15 00 7c              lwz      r0, 0x7c(r21) */
/* 0x80794054: 3a 63 00 01              addi     r19, r3, 1 */
/* 0x80794058: 54 00 07 b8              rlwinm   r0, r0, 0, 0x1e, 0x1c */
/* 0x8079405c: 90 15 00 7c              stw      r0, 0x7c(r21) */
/* 0x80794060: 48 00 00 2c              b        0x8079408c */
/* 0x80794064: 80 12 00 00              lwz      r0, 0(r18) */
/* 0x80794068: 2c 00 00 05              cmpwi    r0, 5 */
/* 0x8079406c: 41 82 00 20              beq      0x8079408c */
/* 0x80794070: 2c 00 00 01              cmpwi    r0, 1 */
/* 0x80794074: 41 82 00 18              beq      0x8079408c */
/* 0x80794078: 3a 60 00 02              li       r19, 2 */
/* 0x8079407c: 48 00 00 08              b        0x80794084 */
/* 0x80794080: 3a 73 00 01              addi     r19, r19, 1 */
/* 0x80794084: 7c 84 1e 71              srawi.   r4, r4, 3 */
/* 0x80794088: 40 82 ff f8              bne      0x80794080 */
/* 0x8079408c: 7e a3 ab 78              mr       r3, r21 */
/* 0x80794090: 38 80 00 00              li       r4, 0 */
/* 0x80794094: 48 00 84 0d              bl       0x8079c4a0 */
/* 0x80794098: 6e 60 80 00              xoris    r0, r19, 0x8000 */
/* 0x8079409c: 90 01 00 1c              stw      r0, 0x1c(r1) */
/* 0x807940a0: 80 7e 00 00              lwz      r3, 0(r30) */
/* 0x807940a4: 38 95 00 44              addi     r4, r21, 0x44 */
/* 0x807940a8: 93 a1 00 18              stw      r29, 0x18(r1) */
/* 0x807940ac: 38 a0 00 0e              li       r5, 0xe */
/* 0x807940b0: c8 01 00 18              lfd      f0, 0x18(r1) */
/* 0x807940b4: ec 00 f0 28              fsubs    f0, f0, f30 */
/* 0x807940b8: ec 1f 00 32              fmuls    f0, f31, f0 */
/* 0x807940bc: ec 20 08 2a              fadds    f1, f0, f1 */
/* 0x807940c0: 4b ff 4e 8d              bl       0x80788f4c */
/* 0x807940c4: a8 75 00 6e              lha      r3, 0x6e(r21) */
/* 0x807940c8: 38 03 00 01              addi     r0, r3, 1 */
/* 0x807940cc: b0 15 00 6e              sth      r0, 0x6e(r21) */
/* 0x807940d0: a8 75 00 70              lha      r3, 0x70(r21) */
/* 0x807940d4: 38 03 00 01              addi     r0, r3, 1 */
/* 0x807940d8: b0 15 00 70              sth      r0, 0x70(r21) */
/* 0x807940dc: 80 75 00 bc              lwz      r3, 0xbc(r21) */
/* 0x807940e0: 80 15 00 c0              lwz      r0, 0xc0(r21) */
/* 0x807940e4: 90 01 00 0c              stw      r0, 0xc(r1) */
/* 0x807940e8: 90 61 00 08              stw      r3, 8(r1) */
/* 0x807940ec: 80 15 00 c4              lwz      r0, 0xc4(r21) */
#endif


/* === DISASSEMBLY === */

; Function: ItemHolderPlayerb4_use
; Demangled: ItemHolderPlayerb4_use
; Address: 0x80793df8  (.text+0x28155c)
; Size: 760 bytes

  0x80793df8:  lwz      r3, 0(r3)
  0x80793dfc:  lwz      r0, 0x42c(r3)
  0x80793e00:  cmpwi    r0, 0
  0x80793e04:  ble      0x80793e20
  0x80793e08:  lwz      r0, 0x14(r18)
  0x80793e0c:  cmpwi    r0, 0
  0x80793e10:  ble      0x80793e20
  0x80793e14:  lwz      r3, 4(r18)
  0x80793e18:  lwz      r3, 0(r3)
  0x80793e1c:  bl       0x8079d68c
  0x80793e20:  lis      r3, 0
  0x80793e24:  lbz      r0, 0(r3)
  0x80793e28:  cmpwi    r0, 0
  0x80793e2c:  bne      0x80793e6c
  0x80793e30:  li       r17, 0
  0x80793e34:  b        0x80793e60
  0x80793e38:  lwz      r3, 4(r18)
  0x80793e3c:  slwi     r0, r17, 2
  0x80793e40:  li       r4, 0
  0x80793e44:  lwzx     r3, r3, r0
  0x80793e48:  bl       0x8079c848
  0x80793e4c:  cmpwi    r3, 0
  0x80793e50:  beq      0x80793e5c
  0x80793e54:  lwz      r22, 0x14(r18)
  0x80793e58:  addi     r17, r17, -1
  0x80793e5c:  addi     r17, r17, 1
  0x80793e60:  cmpw     r17, r22
  0x80793e64:  blt      0x80793e38
  0x80793e68:  b        0x807941b8
  0x80793e6c:  lis      r4, 0
  0x80793e70:  lis      r3, 0
  0x80793e74:  lfd      f30, 0(r4)
  0x80793e78:  li       r20, 0
  0x80793e7c:  lfs      f31, 0(r3)
  0x80793e80:  lis      r31, 0
  0x80793e84:  lis      r26, 0
  0x80793e88:  lis      r27, 0
  0x80793e8c:  lis      r25, 0x101
  0x80793e90:  lis      r24, 0
  0x80793e94:  lis      r28, 0
  0x80793e98:  lis      r29, 0x4330
  0x80793e9c:  lis      r30, 0
  0x80793ea0:  li       r17, 0x14
  0x80793ea4:  b        0x807941b0
  0x80793ea8:  lwz      r3, 4(r18)
  0x80793eac:  slwi     r0, r20, 2
  0x80793eb0:  lwzx     r21, r3, r0
  0x80793eb4:  lwz      r3, 0x7c(r21)
  0x80793eb8:  clrlwi.  r0, r3, 0x1f
  0x80793ebc:  rlwinm   r23, r3, 0x1e, 0x1f, 0x1f
  0x80793ec0:  beq      0x80793f30
  0x80793ec4:  lbz      r0, 0x6c(r21)
  0x80793ec8:  li       r3, 0
  0x80793ecc:  lwz      r4, 0(r24)
  0x80793ed0:  slwi     r0, r0, 2
  0x80793ed4:  add      r4, r4, r0
  0x80793ed8:  lwz      r4, 0x10(r4)
  0x80793edc:  lwz      r0, 0x6dc(r4)
  0x80793ee0:  cmpwi    r0, 0
  0x80793ee4:  ble      0x80793f00
  0x80793ee8:  cmpwi    r21, 0
  0x80793eec:  beq      0x80793efc
  0x80793ef0:  lwz      r0, 0x6e0(r4)
  0x80793ef4:  cmplw    r21, r0
  0x80793ef8:  bne      0x80793f00
  0x80793efc:  li       r3, 1
  0x80793f00:  cmpwi    r3, 0
  0x80793f04:  beq      0x80793f30
  0x80793f08:  lha      r5, 0x6e(r21)
  0x80793f0c:  mr       r3, r21
  0x80793f10:  li       r4, 0
  0x80793f14:  addi     r0, r5, 1
  0x80793f18:  sth      r0, 0x6e(r21)
  0x80793f1c:  lha      r5, 0x70(r21)
  0x80793f20:  addi     r0, r5, 1
  0x80793f24:  sth      r0, 0x70(r21)
  0x80793f28:  bl       0x807a0304
  0x80793f2c:  b        0x807941ac
  0x80793f30:  cmpwi    r23, 0
  0x80793f34:  lha      r4, 0x70(r21)
  0x80793f38:  bne      0x80794018
  0x80793f3c:  cmpwi    r4, 0
  0x80793f40:  bgt      0x80794018
  0x80793f44:  bge      0x80793fd8
  0x80793f48:  lwz      r0, 0x160(r21)
  0x80793f4c:  cmpwi    r0, 0x3c
  0x80793f50:  ble      0x80793fd8
  0x80793f54:  lwz      r3, 0xa4(r21)
  0x80793f58:  addi     r4, r25, 0x101
  0x80793f5c:  lwz      r0, 0x20(r3)
  0x80793f60:  andc.    r0, r4, r0
  0x80793f64:  bne      0x80793fd8
  0x80793f68:  lwz      r0, 0(r26)
  0x80793f6c:  li       r4, 0
  0x80793f70:  lha      r3, 8(r21)
  0x80793f74:  cmpwi    r0, 0
  0x80793f78:  ble      0x80793f8c
  0x80793f7c:  lwz      r0, 0(r27)
  0x80793f80:  clrlwi   r3, r3, 0x1e
  0x80793f84:  cmplw    r3, r0
  0x80793f88:  bne      0x80793f90
  0x80793f8c:  li       r4, 1
  0x80793f90:  cmpwi    r4, 0
  0x80793f94:  beq      0x80793fd8
  0x80793f98:  lha      r3, 0x6e(r21)
  0x80793f9c:  addi     r0, r3, 1
  0x80793fa0:  sth      r0, 0x6e(r21)
  0x80793fa4:  lha      r3, 0x70(r21)
  0x80793fa8:  addi     r0, r3, 1
  0x80793fac:  sth      r0, 0x70(r21)
  0x80793fb0:  lwz      r0, 0x7c(r21)
  0x80793fb4:  rlwinm.  r0, r0, 0, 0x1c, 0x1c
  0x80793fb8:  beq      0x80793fc8
  0x80793fbc:  mr       r3, r21
  0x80793fc0:  li       r4, 0
  0x80793fc4:  bl       0x807a0304
  0x80793fc8:  lwz      r0, 0x74(r21)
  0x80793fcc:  ori      r0, r0, 0x100
  0x80793fd0:  stw      r0, 0x74(r21)
  0x80793fd4:  b        0x807941ac
  0x80793fd8:  mr       r3, r21
  0x80793fdc:  li       r4, 0
  0x80793fe0:  bl       0x8079c848
  0x80793fe4:  cmpwi    r3, 0
  0x80793fe8:  beq      0x80793ff4
  0x80793fec:  lwz      r22, 0x14(r18)
  0x80793ff0:  addi     r20, r20, -1
  0x80793ff4:  lwz      r3, 0x7c(r21)
  0x80793ff8:  clrlwi.  r0, r3, 0x1f
  0x80793ffc:  beq      0x807941ac
  0x80794000:  rlwinm.  r0, r3, 0, 0x1c, 0x1c
  0x80794004:  beq      0x807941ac
  0x80794008:  mr       r3, r21
  0x8079400c:  li       r4, 0
  0x80794010:  bl       0x807a0304
  0x80794014:  b        0x807941ac
  0x80794018:  lwz      r0, 0xb0(r21)
  0x8079401c:  li       r19, 1
  0x80794020:  lfs      f29, 0(r28)
  0x80794024:  cmpwi    r0, 0
  0x80794028:  bne      0x80794038
  0x8079402c:  lwz      r0, 0(r18)
  0x80794030:  cmpwi    r0, 5
  0x80794034:  bne      0x8079408c
  0x80794038:  cmpwi    r23, 0
  0x8079403c:  beq      0x80794064
  0x80794040:  cmpwi    r4, 0x3c
  0x80794044:  li       r3, 0x3c
  0x80794048:  blt      0x80794050
  0x8079404c:  mr       r3, r4
  0x80794050:  lwz      r0, 0x7c(r21)
  0x80794054:  addi     r19, r3, 1
  0x80794058:  rlwinm   r0, r0, 0, 0x1e, 0x1c
  0x8079405c:  stw      r0, 0x7c(r21)
  0x80794060:  b        0x8079408c
  0x80794064:  lwz      r0, 0(r18)
  0x80794068:  cmpwi    r0, 5
  0x8079406c:  beq      0x8079408c
  0x80794070:  cmpwi    r0, 1
  0x80794074:  beq      0x8079408c
  0x80794078:  li       r19, 2
  0x8079407c:  b        0x80794084
  0x80794080:  addi     r19, r19, 1
  0x80794084:  srawi.   r4, r4, 3
  0x80794088:  bne      0x80794080
  0x8079408c:  mr       r3, r21
  0x80794090:  li       r4, 0
  0x80794094:  bl       0x8079c4a0
  0x80794098:  xoris    r0, r19, 0x8000
  0x8079409c:  stw      r0, 0x1c(r1)
  0x807940a0:  lwz      r3, 0(r30)
  0x807940a4:  addi     r4, r21, 0x44
  0x807940a8:  stw      r29, 0x18(r1)
  0x807940ac:  li       r5, 0xe
  0x807940b0:  lfd      f0, 0x18(r1)
  0x807940b4:  fsubs    f0, f0, f30
  0x807940b8:  fmuls    f0, f31, f0
  0x807940bc:  fadds    f1, f0, f1
  0x807940c0:  bl       0x80788f4c
  0x807940c4:  lha      r3, 0x6e(r21)
  0x807940c8:  addi     r0, r3, 1
  0x807940cc:  sth      r0, 0x6e(r21)
  0x807940d0:  lha      r3, 0x70(r21)
  0x807940d4:  addi     r0, r3, 1
  0x807940d8:  sth      r0, 0x70(r21)
  0x807940dc:  lwz      r3, 0xbc(r21)
  0x807940e0:  lwz      r0, 0xc0(r21)
  0x807940e4:  stw      r0, 0xc(r1)
  0x807940e8:  stw      r3, 8(r1)
  0x807940ec:  lwz      r0, 0xc4(r21)
