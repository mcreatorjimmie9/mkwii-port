/**
 * RacedataFactory_packRacedataRecord
 * @addr 0x8058f018
 * @size 2204 bytes
 * @frame 32 bytes
 * @calls 14 function(s)
 */
void RacedataFactory_packRacedataRecord(void) {
    /* *(f32*)(r1+0x34) = f0 */
    /* f0 = *(f32*)(r3+0x8) */
    /* r3 = r30 */
    /* *(f32*)(r1+0x44) = f0 */
    /* 0x805907c0() */
    /* f1 = *(f32*)(r3+0x22c) */
    /* r3 = r30 */
    /* f0 = *(f32*)(r1+0x34) */
    /* fsubs f0, f0, f1 */
    /* *(f32*)(r1+0x34) = f0 */
    /* 0x80590810() */
    /* r30 = r3 */
    /* li r31, 0 */
    /* r3 = r30+0x14 */
    /* r3 = r3+0x0 */
    /* cmpwi r3, 0 */
    /* if (cr0 ==) goto 0x8058f068 */
    /* addi r5, r1, 0x18 */
    /* li r4, 0 */
    /* 0x80555bf8() */
    /* addi r31, r31, 1 */
    /* addi r30, r30, 4 */
    /* cmpwi r31, 2 */
    /* if (cr0 <) goto 0x8058f04c */
    /* r0 = stack[0x54] */
    /* r31 = stack[0x4c] */
    /* r30 = stack[0x48] */
    /* mtlr r0 */
    /* addi r1, r1, 0x50 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x8058f018: d0 01 00 34              stfs     f0, 0x34(r1) */
/* 0x8058f01c: c0 03 00 08              lfs      f0, 8(r3) */
/* 0x8058f020: 7f c3 f3 78              mr       r3, r30 */
/* 0x8058f024: d0 01 00 44              stfs     f0, 0x44(r1) */
/* 0x8058f028: 48 00 17 99              bl       0x805907c0 */
/* 0x8058f02c: c0 23 02 2c              lfs      f1, 0x22c(r3) */
/* 0x8058f030: 7f c3 f3 78              mr       r3, r30 */
/* 0x8058f034: c0 01 00 34              lfs      f0, 0x34(r1) */
/* 0x8058f038: ec 00 08 28              fsubs    f0, f0, f1 */
/* 0x8058f03c: d0 01 00 34              stfs     f0, 0x34(r1) */
/* 0x8058f040: 48 00 17 d1              bl       0x80590810 */
/* 0x8058f044: 7c 7e 1b 78              mr       r30, r3 */
/* 0x8058f048: 3b e0 00 00              li       r31, 0 */
/* 0x8058f04c: 80 7e 00 14              lwz      r3, 0x14(r30) */
/* 0x8058f050: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x8058f054: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x8058f058: 41 82 00 10              beq      0x8058f068 */
/* 0x8058f05c: 38 a1 00 18              addi     r5, r1, 0x18 */
/* 0x8058f060: 38 80 00 00              li       r4, 0 */
/* 0x8058f064: 4b fc 6b 95              bl       0x80555bf8 */
/* 0x8058f068: 3b ff 00 01              addi     r31, r31, 1 */
/* 0x8058f06c: 3b de 00 04              addi     r30, r30, 4 */
/* 0x8058f070: 2c 1f 00 02              cmpwi    r31, 2 */
/* 0x8058f074: 41 80 ff d8              blt      0x8058f04c */
/* 0x8058f078: 80 01 00 54              lwz      r0, 0x54(r1) */
/* 0x8058f07c: 83 e1 00 4c              lwz      r31, 0x4c(r1) */
/* 0x8058f080: 83 c1 00 48              lwz      r30, 0x48(r1) */
/* 0x8058f084: 7c 08 03 a6              mtlr     r0 */
/* 0x8058f088: 38 21 00 50              addi     r1, r1, 0x50 */
/* 0x8058f08c: 4e 80 00 20              blr       */
/* 0x8058f090: 94 21 ff e0              stwu     r1, -0x20(r1) */
/* 0x8058f094: 7c 08 02 a6              mflr     r0 */
/* 0x8058f098: 90 01 00 24              stw      r0, 0x24(r1) */
/* 0x8058f09c: db e1 00 10              stfd     f31, 0x10(r1) */
/* 0x8058f0a0: f3 e1 00 18              xscmpeqdp vs31, f1, f0 */
/* 0x8058f0a4: 3c 80 00 00              lis      r4, 0 */
/* 0x8058f0a8: 93 e1 00 0c              stw      r31, 0xc(r1) */
/* 0x8058f0ac: 7c 7f 1b 78              mr       r31, r3 */
/* 0x8058f0b0: 93 c1 00 08              stw      r30, 8(r1) */
/* 0x8058f0b4: 80 84 00 00              lwz      r4, 0(r4) */
/* 0x8058f0b8: 80 04 0b 90              lwz      r0, 0xb90(r4) */
/* 0x8058f0bc: 54 00 07 7b              rlwinm.  r0, r0, 0, 0x1d, 0x1d */
/* 0x8058f0c0: 41 82 00 54              beq      0x8058f114 */
/* 0x8058f0c4: 80 04 0b 70              lwz      r0, 0xb70(r4) */
/* 0x8058f0c8: 2c 00 00 01              cmpwi    r0, 1 */
/* 0x8058f0cc: 40 82 00 30              bne      0x8058f0fc */
/* 0x8058f0d0: 80 83 00 00              lwz      r4, 0(r3) */
/* 0x8058f0d4: 80 84 00 04              lwz      r4, 4(r4) */
/* 0x8058f0d8: 80 04 00 14              lwz      r0, 0x14(r4) */
/* 0x8058f0dc: 60 00 80 00              ori      r0, r0, 0x8000 */
/* 0x8058f0e0: 90 04 00 14              stw      r0, 0x14(r4) */
/* 0x8058f0e4: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x8058f0e8: 80 63 00 04              lwz      r3, 4(r3) */
/* 0x8058f0ec: 80 03 00 14              lwz      r0, 0x14(r3) */
/* 0x8058f0f0: 60 00 00 01              ori      r0, r0, 1 */
/* 0x8058f0f4: 90 03 00 14              stw      r0, 0x14(r3) */
/* 0x8058f0f8: 48 00 00 3c              b        0x8058f134 */
/* 0x8058f0fc: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x8058f100: 80 63 00 04              lwz      r3, 4(r3) */
/* 0x8058f104: 80 03 00 14              lwz      r0, 0x14(r3) */
/* 0x8058f108: 64 00 00 04              oris     r0, r0, 4 */
/* 0x8058f10c: 90 03 00 14              stw      r0, 0x14(r3) */
/* 0x8058f110: 48 00 00 24              b        0x8058f134 */
/* 0x8058f114: 48 00 15 81              bl       0x80590694 */
/* 0x8058f118: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x8058f11c: 41 82 00 18              beq      0x8058f134 */
/* 0x8058f120: 80 7f 00 00              lwz      r3, 0(r31) */
/* 0x8058f124: 80 63 00 04              lwz      r3, 4(r3) */
/* 0x8058f128: 80 03 00 14              lwz      r0, 0x14(r3) */
/* 0x8058f12c: 60 00 00 01              ori      r0, r0, 1 */
/* 0x8058f130: 90 03 00 14              stw      r0, 0x14(r3) */
/* 0x8058f134: 7f e3 fb 78              mr       r3, r31 */
/* 0x8058f138: 48 00 15 85              bl       0x805906bc */
/* 0x8058f13c: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x8058f140: 41 82 00 18              beq      0x8058f158 */
/* 0x8058f144: 80 7f 00 00              lwz      r3, 0(r31) */
/* 0x8058f148: 80 63 00 04              lwz      r3, 4(r3) */
/* 0x8058f14c: 80 03 00 14              lwz      r0, 0x14(r3) */
/* 0x8058f150: 64 00 00 04              oris     r0, r0, 4 */
/* 0x8058f154: 90 03 00 14              stw      r0, 0x14(r3) */
/* 0x8058f158: 7f e3 fb 78              mr       r3, r31 */
/* 0x8058f15c: 48 00 15 85              bl       0x805906e0 */
/* 0x8058f160: 81 83 00 0c              lwz      r12, 0xc(r3) */
/* 0x8058f164: 81 8c 00 24              lwz      r12, 0x24(r12) */
/* 0x8058f168: 7d 89 03 a6              mtctr    r12 */
/* 0x8058f16c: 4e 80 04 21              bctrl     */
/* 0x8058f170: 3b c0 00 00              li       r30, 0 */
/* 0x8058f174: 48 00 00 24              b        0x8058f198 */
/* 0x8058f178: 7f e3 fb 78              mr       r3, r31 */
/* 0x8058f17c: 7f c4 f3 78              mr       r4, r30 */
/* 0x8058f180: 48 00 15 79              bl       0x805906f8 */
/* 0x8058f184: 81 83 00 0c              lwz      r12, 0xc(r3) */
/* 0x8058f188: 81 8c 00 24              lwz      r12, 0x24(r12) */
/* 0x8058f18c: 7d 89 03 a6              mtctr    r12 */
/* 0x8058f190: 4e 80 04 21              bctrl     */
/* 0x8058f194: 3b de 00 01              addi     r30, r30, 1 */
/* 0x8058f198: 7f e3 fb 78              mr       r3, r31 */
/* 0x8058f19c: 48 00 11 85              bl       0x80590320 */
/* 0x8058f1a0: 54 60 04 3e              clrlwi   r0, r3, 0x10 */
/* 0x8058f1a4: 7c 1e 00 00              cmpw     r30, r0 */
/* 0x8058f1a8: 41 80 ff d0              blt      0x8058f178 */
/* 0x8058f1ac: 3b c0 00 00              li       r30, 0 */
/* 0x8058f1b0: 48 00 00 24              b        0x8058f1d4 */
/* 0x8058f1b4: 7f e3 fb 78              mr       r3, r31 */
/* 0x8058f1b8: 7f c4 f3 78              mr       r4, r30 */
/* 0x8058f1bc: 48 00 15 65              bl       0x80590720 */
/* 0x8058f1c0: 81 83 00 0c              lwz      r12, 0xc(r3) */
/* 0x8058f1c4: 81 8c 00 24              lwz      r12, 0x24(r12) */
/* 0x8058f1c8: 7d 89 03 a6              mtctr    r12 */
/* 0x8058f1cc: 4e 80 04 21              bctrl     */
/* 0x8058f1d0: 3b de 00 01              addi     r30, r30, 1 */
/* 0x8058f1d4: 7f e3 fb 78              mr       r3, r31 */
/* 0x8058f1d8: 48 00 11 59              bl       0x80590330 */
/* 0x8058f1dc: 54 60 04 3e              clrlwi   r0, r3, 0x10 */
/* 0x8058f1e0: 7c 1e 00 00              cmpw     r30, r0 */
/* 0x8058f1e4: 41 80 ff d0              blt      0x8058f1b4 */
/* 0x8058f1e8: 38 60 00 05              li       r3, 5 */
/* 0x8058f1ec: 48 00 3c 3d              bl       0x80592e28 */
/* 0x8058f1f0: ff e0 08 90              fmr      f31, f1 */
/* 0x8058f1f4: 7f e3 fb 78              mr       r3, r31 */
/* 0x8058f1f8: 48 00 16 19              bl       0x80590810 */
/* 0x8058f1fc: 80 83 00 48              lwz      r4, 0x48(r3) */
/* 0x8058f200: ec 1f 07 f2              fmuls    f0, f31, f31 */
/* 0x8058f204: 7f e3 fb 78              mr       r3, r31 */
/* 0x8058f208: d0 04 00 00              stfs     f0, 0(r4) */
/* 0x8058f20c: 48 00 15 9d              bl       0x805907a8 */
/* 0x8058f210: 80 63 00 20              lwz      r3, 0x20(r3) */
/* 0x8058f214: 48 19 95 cd              bl       0x807287e0 */
#endif


/* === DISASSEMBLY === */

; Function: RacedataFactory_packRacedataRecord
; Demangled: RacedataFactory_packRacedataRecord
; Address: 0x8058f018  (.text+0x7c77c)
; Size: 2204 bytes

  0x8058f018:  stfs     f0, 0x34(r1)
  0x8058f01c:  lfs      f0, 8(r3)
  0x8058f020:  mr       r3, r30
  0x8058f024:  stfs     f0, 0x44(r1)
  0x8058f028:  bl       0x805907c0
  0x8058f02c:  lfs      f1, 0x22c(r3)
  0x8058f030:  mr       r3, r30
  0x8058f034:  lfs      f0, 0x34(r1)
  0x8058f038:  fsubs    f0, f0, f1
  0x8058f03c:  stfs     f0, 0x34(r1)
  0x8058f040:  bl       0x80590810
  0x8058f044:  mr       r30, r3
  0x8058f048:  li       r31, 0
  0x8058f04c:  lwz      r3, 0x14(r30)
  0x8058f050:  lwz      r3, 0(r3)
  0x8058f054:  cmpwi    r3, 0
  0x8058f058:  beq      0x8058f068
  0x8058f05c:  addi     r5, r1, 0x18
  0x8058f060:  li       r4, 0
  0x8058f064:  bl       0x80555bf8
  0x8058f068:  addi     r31, r31, 1
  0x8058f06c:  addi     r30, r30, 4
  0x8058f070:  cmpwi    r31, 2
  0x8058f074:  blt      0x8058f04c
  0x8058f078:  lwz      r0, 0x54(r1)
  0x8058f07c:  lwz      r31, 0x4c(r1)
  0x8058f080:  lwz      r30, 0x48(r1)
  0x8058f084:  mtlr     r0
  0x8058f088:  addi     r1, r1, 0x50
  0x8058f08c:  blr      
  0x8058f090:  stwu     r1, -0x20(r1)
  0x8058f094:  mflr     r0
  0x8058f098:  stw      r0, 0x24(r1)
  0x8058f09c:  stfd     f31, 0x10(r1)
  0x8058f0a0:  xscmpeqdp vs31, f1, f0
  0x8058f0a4:  lis      r4, 0
  0x8058f0a8:  stw      r31, 0xc(r1)
  0x8058f0ac:  mr       r31, r3
  0x8058f0b0:  stw      r30, 8(r1)
  0x8058f0b4:  lwz      r4, 0(r4)
  0x8058f0b8:  lwz      r0, 0xb90(r4)
  0x8058f0bc:  rlwinm.  r0, r0, 0, 0x1d, 0x1d
  0x8058f0c0:  beq      0x8058f114
  0x8058f0c4:  lwz      r0, 0xb70(r4)
  0x8058f0c8:  cmpwi    r0, 1
  0x8058f0cc:  bne      0x8058f0fc
  0x8058f0d0:  lwz      r4, 0(r3)
  0x8058f0d4:  lwz      r4, 4(r4)
  0x8058f0d8:  lwz      r0, 0x14(r4)
  0x8058f0dc:  ori      r0, r0, 0x8000
  0x8058f0e0:  stw      r0, 0x14(r4)
  0x8058f0e4:  lwz      r3, 0(r3)
  0x8058f0e8:  lwz      r3, 4(r3)
  0x8058f0ec:  lwz      r0, 0x14(r3)
  0x8058f0f0:  ori      r0, r0, 1
  0x8058f0f4:  stw      r0, 0x14(r3)
  0x8058f0f8:  b        0x8058f134
  0x8058f0fc:  lwz      r3, 0(r3)
  0x8058f100:  lwz      r3, 4(r3)
  0x8058f104:  lwz      r0, 0x14(r3)
  0x8058f108:  oris     r0, r0, 4
  0x8058f10c:  stw      r0, 0x14(r3)
  0x8058f110:  b        0x8058f134
  0x8058f114:  bl       0x80590694
  0x8058f118:  cmpwi    r3, 0
  0x8058f11c:  beq      0x8058f134
  0x8058f120:  lwz      r3, 0(r31)
  0x8058f124:  lwz      r3, 4(r3)
  0x8058f128:  lwz      r0, 0x14(r3)
  0x8058f12c:  ori      r0, r0, 1
  0x8058f130:  stw      r0, 0x14(r3)
  0x8058f134:  mr       r3, r31
  0x8058f138:  bl       0x805906bc
  0x8058f13c:  cmpwi    r3, 0
  0x8058f140:  beq      0x8058f158
  0x8058f144:  lwz      r3, 0(r31)
  0x8058f148:  lwz      r3, 4(r3)
  0x8058f14c:  lwz      r0, 0x14(r3)
  0x8058f150:  oris     r0, r0, 4
  0x8058f154:  stw      r0, 0x14(r3)
  0x8058f158:  mr       r3, r31
  0x8058f15c:  bl       0x805906e0
  0x8058f160:  lwz      r12, 0xc(r3)
  0x8058f164:  lwz      r12, 0x24(r12)
  0x8058f168:  mtctr    r12
  0x8058f16c:  bctrl    
  0x8058f170:  li       r30, 0
  0x8058f174:  b        0x8058f198
  0x8058f178:  mr       r3, r31
  0x8058f17c:  mr       r4, r30
  0x8058f180:  bl       0x805906f8
  0x8058f184:  lwz      r12, 0xc(r3)
  0x8058f188:  lwz      r12, 0x24(r12)
  0x8058f18c:  mtctr    r12
  0x8058f190:  bctrl    
  0x8058f194:  addi     r30, r30, 1
  0x8058f198:  mr       r3, r31
  0x8058f19c:  bl       0x80590320
  0x8058f1a0:  clrlwi   r0, r3, 0x10
  0x8058f1a4:  cmpw     r30, r0
  0x8058f1a8:  blt      0x8058f178
  0x8058f1ac:  li       r30, 0
  0x8058f1b0:  b        0x8058f1d4
  0x8058f1b4:  mr       r3, r31
  0x8058f1b8:  mr       r4, r30
  0x8058f1bc:  bl       0x80590720
  0x8058f1c0:  lwz      r12, 0xc(r3)
  0x8058f1c4:  lwz      r12, 0x24(r12)
  0x8058f1c8:  mtctr    r12
  0x8058f1cc:  bctrl    
  0x8058f1d0:  addi     r30, r30, 1
  0x8058f1d4:  mr       r3, r31
  0x8058f1d8:  bl       0x80590330
  0x8058f1dc:  clrlwi   r0, r3, 0x10
  0x8058f1e0:  cmpw     r30, r0
  0x8058f1e4:  blt      0x8058f1b4
  0x8058f1e8:  li       r3, 5
  0x8058f1ec:  bl       0x80592e28
  0x8058f1f0:  fmr      f31, f1
  0x8058f1f4:  mr       r3, r31
  0x8058f1f8:  bl       0x80590810
  0x8058f1fc:  lwz      r4, 0x48(r3)
  0x8058f200:  fmuls    f0, f31, f31
  0x8058f204:  mr       r3, r31
  0x8058f208:  stfs     f0, 0(r4)
  0x8058f20c:  bl       0x805907a8
  0x8058f210:  lwz      r3, 0x20(r3)
  0x8058f214:  bl       0x807287e0
