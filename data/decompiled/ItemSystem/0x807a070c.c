/**
 * ItemObj_init
 * @addr 0x807a070c
 * @size 220 bytes
 * @frame 0 bytes
 * @calls 1 function(s)
 */
void ItemObj_init(void) {
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */
    /* if (cr0 !=) goto 0x807a0724 */
    /* li r4, 1 */
    /* 0x807a3dbc() */
    /* li r3, 1 */
    /* goto 0x807a0728 */
    /* li r3, 0 */
    /* r0 = stack[0x14] */
    /* mtlr r0 */
    /* addi r1, r1, 0x10 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x807a070c: 54 00 07 39              rlwinm.  r0, r0, 0, 0x1c, 0x1c */
/* 0x807a0710: 40 82 00 14              bne      0x807a0724 */
/* 0x807a0714: 38 80 00 01              li       r4, 1 */
/* 0x807a0718: 48 00 36 a5              bl       0x807a3dbc */
/* 0x807a071c: 38 60 00 01              li       r3, 1 */
/* 0x807a0720: 48 00 00 08              b        0x807a0728 */
/* 0x807a0724: 38 60 00 00              li       r3, 0 */
/* 0x807a0728: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x807a072c: 7c 08 03 a6              mtlr     r0 */
/* 0x807a0730: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x807a0734: 4e 80 00 20              blr       */
/* 0x807a0738: 80 03 00 04              lwz      r0, 4(r3) */
/* 0x807a073c: 3c 80 00 00              lis      r4, 0 */
/* 0x807a0740: 38 84 00 00              addi     r4, r4, 0 */
/* 0x807a0744: c0 03 00 b8              lfs      f0, 0xb8(r3) */
/* 0x807a0748: 1c 00 00 74              mulli    r0, r0, 0x74 */
/* 0x807a074c: 7c 64 02 14              add      r3, r4, r0 */
/* 0x807a0750: c0 23 00 34              lfs      f1, 0x34(r3) */
/* 0x807a0754: ec 20 00 72              fmuls    f1, f0, f1 */
/* 0x807a0758: 4e 80 00 20              blr       */
/* 0x807a075c: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x807a0760: 4d 82 00 20              beqlr     */
/* 0x807a0764: 3c 60 00 00              lis      r3, 0 */
/* 0x807a0768: 80 63 00 00              lwz      r3, 0(r3) */
/* 0x807a076c: 4b f5 dd 34              b        0x806fe4a0 */
/* 0x807a0770: 4e 80 00 20              blr       */
/* 0x807a0774: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x807a0778: 4d 82 00 20              beqlr     */
/* 0x807a077c: 80 63 01 80              lwz      r3, 0x180(r3) */
/* 0x807a0780: 81 83 00 00              lwz      r12, 0(r3) */
/* 0x807a0784: 81 8c 00 e0              lwz      r12, 0xe0(r12) */
/* 0x807a0788: 7d 89 03 a6              mtctr    r12 */
/* 0x807a078c: 4e 80 04 20              bctr      */
/* 0x807a0790: 4e 80 00 20              blr       */
/* 0x807a0794: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x807a0798: 4d 82 00 20              beqlr     */
/* 0x807a079c: 80 63 01 80              lwz      r3, 0x180(r3) */
/* 0x807a07a0: 81 83 00 00              lwz      r12, 0(r3) */
/* 0x807a07a4: 81 8c 00 e8              lwz      r12, 0xe8(r12) */
/* 0x807a07a8: 7d 89 03 a6              mtctr    r12 */
/* 0x807a07ac: 4e 80 04 20              bctr      */
/* 0x807a07b0: 4e 80 00 20              blr       */
/* 0x807a07b4: 2c 04 00 00              cmpwi    r4, 0 */
/* 0x807a07b8: 4d 82 00 20              beqlr     */
/* 0x807a07bc: 80 63 01 80              lwz      r3, 0x180(r3) */
/* 0x807a07c0: 81 83 00 00              lwz      r12, 0(r3) */
/* 0x807a07c4: 81 8c 00 e4              lwz      r12, 0xe4(r12) */
/* 0x807a07c8: 7d 89 03 a6              mtctr    r12 */
/* 0x807a07cc: 4e 80 04 20              bctr      */
/* 0x807a07d0: 4e 80 00 20              blr       */
/* 0x807a07d4: 48 00 37 c0              b        0x807a3f94 */
/* 0x807a07d8: 38 03 00 80              addi     r0, r3, 0x80 */
/* 0x807a07dc: 90 03 00 98              stw      r0, 0x98(r3) */
/* 0x807a07e0: 4e 80 00 20              blr       */
/* 0x807a07e4: 80 83 00 98              lwz      r4, 0x98(r3) */
#endif


/* === DISASSEMBLY === */

; Function: ItemObj_init
; Demangled: ItemObj_init
; Address: 0x807a070c  (.text+0x28de70)
; Size: 220 bytes

  0x807a070c:  rlwinm.  r0, r0, 0, 0x1c, 0x1c
  0x807a0710:  bne      0x807a0724
  0x807a0714:  li       r4, 1
  0x807a0718:  bl       0x807a3dbc
  0x807a071c:  li       r3, 1
  0x807a0720:  b        0x807a0728
  0x807a0724:  li       r3, 0
  0x807a0728:  lwz      r0, 0x14(r1)
  0x807a072c:  mtlr     r0
  0x807a0730:  addi     r1, r1, 0x10
  0x807a0734:  blr      
  0x807a0738:  lwz      r0, 4(r3)
  0x807a073c:  lis      r4, 0
  0x807a0740:  addi     r4, r4, 0
  0x807a0744:  lfs      f0, 0xb8(r3)
  0x807a0748:  mulli    r0, r0, 0x74
  0x807a074c:  add      r3, r4, r0
  0x807a0750:  lfs      f1, 0x34(r3)
  0x807a0754:  fmuls    f1, f0, f1
  0x807a0758:  blr      
  0x807a075c:  cmpwi    r4, 0
  0x807a0760:  beqlr    
  0x807a0764:  lis      r3, 0
  0x807a0768:  lwz      r3, 0(r3)
  0x807a076c:  b        0x806fe4a0
  0x807a0770:  blr      
  0x807a0774:  cmpwi    r4, 0
  0x807a0778:  beqlr    
  0x807a077c:  lwz      r3, 0x180(r3)
  0x807a0780:  lwz      r12, 0(r3)
  0x807a0784:  lwz      r12, 0xe0(r12)
  0x807a0788:  mtctr    r12
  0x807a078c:  bctr     
  0x807a0790:  blr      
  0x807a0794:  cmpwi    r4, 0
  0x807a0798:  beqlr    
  0x807a079c:  lwz      r3, 0x180(r3)
  0x807a07a0:  lwz      r12, 0(r3)
  0x807a07a4:  lwz      r12, 0xe8(r12)
  0x807a07a8:  mtctr    r12
  0x807a07ac:  bctr     
  0x807a07b0:  blr      
  0x807a07b4:  cmpwi    r4, 0
  0x807a07b8:  beqlr    
  0x807a07bc:  lwz      r3, 0x180(r3)
  0x807a07c0:  lwz      r12, 0(r3)
  0x807a07c4:  lwz      r12, 0xe4(r12)
  0x807a07c8:  mtctr    r12
  0x807a07cc:  bctr     
  0x807a07d0:  blr      
  0x807a07d4:  b        0x807a3f94
  0x807a07d8:  addi     r0, r3, 0x80
  0x807a07dc:  stw      r0, 0x98(r3)
  0x807a07e0:  blr      
  0x807a07e4:  lwz      r4, 0x98(r3)
