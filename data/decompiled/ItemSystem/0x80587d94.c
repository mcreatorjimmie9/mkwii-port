/**
 * PlayerSub10_activateBullet
 * @addr 0x80587d94
 * @size 344 bytes
 * @frame 160 bytes
 */
void PlayerSub10_activateBullet(void) {
    /* r31 = stack[0xc] */
    /* r0 = stack[0x14] */
    /* mtlr r0 */
    /* addi r1, r1, 0x10 */
    /* Epilogue: restore stack */
    return;
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x80587d94: 83 e1 00 0c              lwz      r31, 0xc(r1) */
/* 0x80587d98: 80 01 00 14              lwz      r0, 0x14(r1) */
/* 0x80587d9c: 7c 08 03 a6              mtlr     r0 */
/* 0x80587da0: 38 21 00 10              addi     r1, r1, 0x10 */
/* 0x80587da4: 4e 80 00 20              blr       */
/* 0x80587da8: 48 00 06 90              b        0x80588438 */
/* 0x80587dac: 94 21 ff 60              stwu     r1, -0xa0(r1) */
/* 0x80587db0: 7c 08 02 a6              mflr     r0 */
/* 0x80587db4: 90 01 00 a4              stw      r0, 0xa4(r1) */
/* 0x80587db8: db e1 00 90              stfd     f31, 0x90(r1) */
/* 0x80587dbc: f3 e1 00 98              xscmpgedp vs31, f1, f0 */
/* 0x80587dc0: db c1 00 80              stfd     f30, 0x80(r1) */
/* 0x80587dc4: f3 c1 00 88              xsmsubasp f30, f1, f0 */
/* 0x80587dc8: db a1 00 70              stfd     f29, 0x70(r1) */
/* 0x80587dcc: f3 a1 00 78              xxsel    vs29, vs1, vs0, v1 */
/* 0x80587dd0: db 81 00 60              stfd     f28, 0x60(r1) */
#endif


/* === DISASSEMBLY === */

; Function: PlayerSub10_activateBullet
; Demangled: PlayerSub10_activateBullet
; Address: 0x80587d94  (.text+0x754f8)
; Size: 344 bytes

  0x80587d94:  lwz      r31, 0xc(r1)
  0x80587d98:  lwz      r0, 0x14(r1)
  0x80587d9c:  mtlr     r0
  0x80587da0:  addi     r1, r1, 0x10
  0x80587da4:  blr      
  0x80587da8:  b        0x80588438
  0x80587dac:  stwu     r1, -0xa0(r1)
  0x80587db0:  mflr     r0
  0x80587db4:  stw      r0, 0xa4(r1)
  0x80587db8:  stfd     f31, 0x90(r1)
  0x80587dbc:  xscmpgedp vs31, f1, f0
  0x80587dc0:  stfd     f30, 0x80(r1)
  0x80587dc4:  xsmsubasp f30, f1, f0
  0x80587dc8:  stfd     f29, 0x70(r1)
  0x80587dcc:  xxsel    vs29, vs1, vs0, v1
  0x80587dd0:  stfd     f28, 0x60(r1)
