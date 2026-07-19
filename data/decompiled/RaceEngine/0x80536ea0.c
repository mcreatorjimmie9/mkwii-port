/**
 * RaceinfoPlayer_endLap
 * @addr 0x80536ea0
 * @size 704 bytes
 * @frame 0 bytes
 */
void RaceinfoPlayer_endLap(void) {
    /* neg r0, r3 */
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */
    /* if (cr0 ==) goto 0x80536ed4 */
    /* r3 = r4+0x1c */
    /* cmpwi r3, 0 */
    /* if (cr0 ==) goto 0x80536ec4 */
    /* r3 = r3+0x4 */
    /* goto 0x80536ec8 */
    /* li r3, 0 */
    /* neg r0, r3 */
    /* srwi r0, r0, 0x1f */
    /* cmpwi r0, 0 */
    /* if (cr0 ==) goto 0x80536ee8 */
    /* r3 = r4+0x20 */
    /* r0 = r3+0xc */
    /* goto 0x80536eec */
    /* li r0, -1 */
    /* r3 = r26+0x24 */
    /* stb r0, 0x28(r26) */
    /* addi r0, r3, -1 */
    /* sth r0, 0x24(r26) */
    /* *(f32*)(r26+0x1c) = f31 */
    /* r3 = r29 */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x80536ea0: 7c 03 00 d0              neg      r0, r3 */
/* 0x80536ea4: 7c 00 1b 78              or       r0, r0, r3 */
/* 0x80536ea8: 54 00 0f ff              rlwinm.  r0, r0, 1, 0x1f, 0x1f */
/* 0x80536eac: 41 82 00 28              beq      0x80536ed4 */
/* 0x80536eb0: 80 64 00 1c              lwz      r3, 0x1c(r4) */
/* 0x80536eb4: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x80536eb8: 41 82 00 0c              beq      0x80536ec4 */
/* 0x80536ebc: a0 63 00 04              lhz      r3, 4(r3) */
/* 0x80536ec0: 48 00 00 08              b        0x80536ec8 */
/* 0x80536ec4: 38 60 00 00              li       r3, 0 */
/* 0x80536ec8: 7c 03 00 d0              neg      r0, r3 */
/* 0x80536ecc: 7c 00 1b 78              or       r0, r0, r3 */
/* 0x80536ed0: 54 00 0f fe              srwi     r0, r0, 0x1f */
/* 0x80536ed4: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x80536ed8: 41 82 00 10              beq      0x80536ee8 */
/* 0x80536edc: 80 64 00 20              lwz      r3, 0x20(r4) */
/* 0x80536ee0: 88 03 00 0c              lbz      r0, 0xc(r3) */
/* 0x80536ee4: 48 00 00 08              b        0x80536eec */
/* 0x80536ee8: 38 00 ff ff              li       r0, -1 */
/* 0x80536eec: a8 7a 00 24              lha      r3, 0x24(r26) */
/* 0x80536ef0: 98 1a 00 28              stb      r0, 0x28(r26) */
/* 0x80536ef4: 38 03 ff ff              addi     r0, r3, -1 */
/* 0x80536ef8: b0 1a 00 24              sth      r0, 0x24(r26) */
/* 0x80536efc: d3 fa 00 1c              stfs     f31, 0x1c(r26) */
/* 0x80536f00: 7f a3 eb 78              mr       r3, r29 */
#endif


/* === DISASSEMBLY === */

; Function: RaceinfoPlayer_endLap
; Demangled: RaceinfoPlayer_endLap
; Address: 0x80536ea0  (.text+0x24604)
; Size: 704 bytes

  0x80536ea0:  neg      r0, r3
  0x80536ea4:  or       r0, r0, r3
  0x80536ea8:  rlwinm.  r0, r0, 1, 0x1f, 0x1f
  0x80536eac:  beq      0x80536ed4
  0x80536eb0:  lwz      r3, 0x1c(r4)
  0x80536eb4:  cmpwi    r3, 0
  0x80536eb8:  beq      0x80536ec4
  0x80536ebc:  lhz      r3, 4(r3)
  0x80536ec0:  b        0x80536ec8
  0x80536ec4:  li       r3, 0
  0x80536ec8:  neg      r0, r3
  0x80536ecc:  or       r0, r0, r3
  0x80536ed0:  srwi     r0, r0, 0x1f
  0x80536ed4:  cmpwi    r0, 0
  0x80536ed8:  beq      0x80536ee8
  0x80536edc:  lwz      r3, 0x20(r4)
  0x80536ee0:  lbz      r0, 0xc(r3)
  0x80536ee4:  b        0x80536eec
  0x80536ee8:  li       r0, -1
  0x80536eec:  lha      r3, 0x24(r26)
  0x80536ef0:  stb      r0, 0x28(r26)
  0x80536ef4:  addi     r0, r3, -1
  0x80536ef8:  sth      r0, 0x24(r26)
  0x80536efc:  stfs     f31, 0x1c(r26)
  0x80536f00:  mr       r3, r29
