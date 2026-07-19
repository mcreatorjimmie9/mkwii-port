/**
 * ItemObj_spawn
 * @addr 0x807a0a38
 * @size 164 bytes
 * @frame 0 bytes
 * @calls 7 function(s)
 */
void ItemObj_spawn(void) {
    /* r4 = r3+0x78 */
    /* rlwinm. r0, r4, 0, 8, 0xa */
    /* if (cr0 ==) goto 0x807a0ab4 */
    /* r4 = r31 */
    /* li r3, 0 */
    /* li r5, 1 */
    /* 0x8079a1bc() */
    /* r4 = r31 */
    /* li r5, 0 */
    /* 0x8079a1bc() */
    /* r0 = r31+0x7c */
    /* r3 = r31 */
    /* ori r0, r0, 0x80 */
    /* r31+0x7c = r0 */
    /* 0x8079ab3c() */
    /* r0 = r31+0x78 */
    /* rlwinm. r0, r0, 0, 0xa, 0xa */
    /* if (cr0 ==) goto 0x807a0a88 */
    /* r3 = r31 */
    /* 0x807a41d4() */
    /* r0 = r31+0x78 */
    /* rlwinm. r0, r0, 0, 9, 9 */
    /* if (cr0 ==) goto 0x807a0a9c */
    /* r3 = r31 */
    /* 0x807a47c0() */
    /* r0 = r31+0x78 */
    /* rlwinm. r0, r0, 0, 8, 8 */
    /* if (cr0 ==) goto 0x807a0ba4 */
    /* r3 = r31 */
    /* 0x807a47c8() */
    /* goto 0x807a0ba4 */
    /* rlwinm. r0, r4, 0, 0x10, 0x10 */
    /* if (cr0 ==) goto 0x807a0b2c */
    /* r4 = r31 */
    /* li r3, 0 */
    /* li r5, 1 */
    /* 0x80798d08() */
    /* cmpwi r31, 0 */
    /* if (cr0 ==) goto 0x807a0afc */
    /* r0 = r31+0x78 */
    /* r12, 0  (load upper immediate) */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x807a0a38: 80 83 00 78              lwz      r4, 0x78(r3) */
/* 0x807a0a3c: 54 80 02 15              rlwinm.  r0, r4, 0, 8, 0xa */
/* 0x807a0a40: 41 82 00 74              beq      0x807a0ab4 */
/* 0x807a0a44: 7f e4 fb 78              mr       r4, r31 */
/* 0x807a0a48: 38 60 00 00              li       r3, 0 */
/* 0x807a0a4c: 38 a0 00 01              li       r5, 1 */
/* 0x807a0a50: 4b ff 97 6d              bl       0x8079a1bc */
/* 0x807a0a54: 7f e4 fb 78              mr       r4, r31 */
/* 0x807a0a58: 38 a0 00 00              li       r5, 0 */
/* 0x807a0a5c: 4b ff 97 61              bl       0x8079a1bc */
/* 0x807a0a60: 80 1f 00 7c              lwz      r0, 0x7c(r31) */
/* 0x807a0a64: 7f e3 fb 78              mr       r3, r31 */
/* 0x807a0a68: 60 00 00 80              ori      r0, r0, 0x80 */
/* 0x807a0a6c: 90 1f 00 7c              stw      r0, 0x7c(r31) */
/* 0x807a0a70: 4b ff a0 cd              bl       0x8079ab3c */
/* 0x807a0a74: 80 1f 00 78              lwz      r0, 0x78(r31) */
/* 0x807a0a78: 54 00 02 95              rlwinm.  r0, r0, 0, 0xa, 0xa */
/* 0x807a0a7c: 41 82 00 0c              beq      0x807a0a88 */
/* 0x807a0a80: 7f e3 fb 78              mr       r3, r31 */
/* 0x807a0a84: 48 00 37 51              bl       0x807a41d4 */
/* 0x807a0a88: 80 1f 00 78              lwz      r0, 0x78(r31) */
/* 0x807a0a8c: 54 00 02 53              rlwinm.  r0, r0, 0, 9, 9 */
/* 0x807a0a90: 41 82 00 0c              beq      0x807a0a9c */
/* 0x807a0a94: 7f e3 fb 78              mr       r3, r31 */
/* 0x807a0a98: 48 00 3d 29              bl       0x807a47c0 */
/* 0x807a0a9c: 80 1f 00 78              lwz      r0, 0x78(r31) */
/* 0x807a0aa0: 54 00 02 11              rlwinm.  r0, r0, 0, 8, 8 */
/* 0x807a0aa4: 41 82 01 00              beq      0x807a0ba4 */
/* 0x807a0aa8: 7f e3 fb 78              mr       r3, r31 */
/* 0x807a0aac: 48 00 3d 1d              bl       0x807a47c8 */
/* 0x807a0ab0: 48 00 00 f4              b        0x807a0ba4 */
/* 0x807a0ab4: 54 80 04 21              rlwinm.  r0, r4, 0, 0x10, 0x10 */
/* 0x807a0ab8: 41 82 00 74              beq      0x807a0b2c */
/* 0x807a0abc: 7f e4 fb 78              mr       r4, r31 */
/* 0x807a0ac0: 38 60 00 00              li       r3, 0 */
/* 0x807a0ac4: 38 a0 00 01              li       r5, 1 */
/* 0x807a0ac8: 4b ff 82 41              bl       0x80798d08 */
/* 0x807a0acc: 2c 1f 00 00              cmpwi    r31, 0 */
/* 0x807a0ad0: 41 82 00 2c              beq      0x807a0afc */
/* 0x807a0ad4: 80 1f 00 78              lwz      r0, 0x78(r31) */
/* 0x807a0ad8: 3d 80 00 00              lis      r12, 0 */
#endif


/* === DISASSEMBLY === */

; Function: ItemObj_spawn
; Demangled: ItemObj_spawn
; Address: 0x807a0a38  (.text+0x28e19c)
; Size: 164 bytes

  0x807a0a38:  lwz      r4, 0x78(r3)
  0x807a0a3c:  rlwinm.  r0, r4, 0, 8, 0xa
  0x807a0a40:  beq      0x807a0ab4
  0x807a0a44:  mr       r4, r31
  0x807a0a48:  li       r3, 0
  0x807a0a4c:  li       r5, 1
  0x807a0a50:  bl       0x8079a1bc
  0x807a0a54:  mr       r4, r31
  0x807a0a58:  li       r5, 0
  0x807a0a5c:  bl       0x8079a1bc
  0x807a0a60:  lwz      r0, 0x7c(r31)
  0x807a0a64:  mr       r3, r31
  0x807a0a68:  ori      r0, r0, 0x80
  0x807a0a6c:  stw      r0, 0x7c(r31)
  0x807a0a70:  bl       0x8079ab3c
  0x807a0a74:  lwz      r0, 0x78(r31)
  0x807a0a78:  rlwinm.  r0, r0, 0, 0xa, 0xa
  0x807a0a7c:  beq      0x807a0a88
  0x807a0a80:  mr       r3, r31
  0x807a0a84:  bl       0x807a41d4
  0x807a0a88:  lwz      r0, 0x78(r31)
  0x807a0a8c:  rlwinm.  r0, r0, 0, 9, 9
  0x807a0a90:  beq      0x807a0a9c
  0x807a0a94:  mr       r3, r31
  0x807a0a98:  bl       0x807a47c0
  0x807a0a9c:  lwz      r0, 0x78(r31)
  0x807a0aa0:  rlwinm.  r0, r0, 0, 8, 8
  0x807a0aa4:  beq      0x807a0ba4
  0x807a0aa8:  mr       r3, r31
  0x807a0aac:  bl       0x807a47c8
  0x807a0ab0:  b        0x807a0ba4
  0x807a0ab4:  rlwinm.  r0, r4, 0, 0x10, 0x10
  0x807a0ab8:  beq      0x807a0b2c
  0x807a0abc:  mr       r4, r31
  0x807a0ac0:  li       r3, 0
  0x807a0ac4:  li       r5, 1
  0x807a0ac8:  bl       0x80798d08
  0x807a0acc:  cmpwi    r31, 0
  0x807a0ad0:  beq      0x807a0afc
  0x807a0ad4:  lwz      r0, 0x78(r31)
  0x807a0ad8:  lis      r12, 0
