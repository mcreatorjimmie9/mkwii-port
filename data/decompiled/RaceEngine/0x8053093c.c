/**
 * clear__System10RaceConfigFv
 * @addr 0x8053093c
 * @size 492 bytes
 * @frame 0 bytes
 * @calls 2 function(s)
 */
void System10RaceConfig(void* self) {
    /* if (cr0 !=) goto 0x80530954 */
    /* r3 = r30+0x0 */
    /* r3 = r3+0xc */
    /* lwzx r3, r3, r19 */
    /* r3 = r3+0x22 */
    /* goto 0x8053095c */
    /* add r3, r20, r23 */
    /* lbz r3, -1(r3) */
    /* r0 = r4+0xe0 */
    /* add r0, r0, r3 */
    /* sth r0, 0xe2(r4) */
    /* addi r17, r17, 1 */
    /* clrlwi r0, r17, 0x18 */
    /* cmplw r0, r22 */
    /* if (cr0 <) goto 0x805306ec */
    /* addi r14, r1, 8 */
    /* li r16, 0 */
    /* goto 0x805309a4 */
    /* clrlwi r3, r16, 0x18 */
    /* rlwinm r0, r16, 1, 0x17, 0x1e */
    /* mulli r3, r3, 0xf0 */
    /* lhax r4, r14, r0 */
    /* add r3, r15, r3 */
    /* addi r3, r3, 0xec */
    /* 0x8052f664() */
    /* addi r16, r16, 1 */
    /* clrlwi r0, r16, 0x18 */
    /* cmplw r0, r22 */
    /* if (cr0 <) goto 0x80530984 */
    /* r0 = r15+0xb50 */
    /* cmpwi r0, 0 */
    /* if (cr0 !=) goto 0x80530a10 */
    /* r3, 0  (load upper immediate) */
    /* li r16, 0 */
    /* r15 = r3+0x0 */
    /* r14, 0  (load upper immediate) */
    /* goto 0x805309fc */
    /* clrlwi r0, r16, 0x18 */
    /* mulli r0, r0, 0xf0 */
    /* add r3, r4, r0 */
    /* r0 = r3+0x38 */
    /* cmpwi r0, 0 */
    /* if (cr0 !=) goto 0x805309f8 */
    /* r3 = r15+0xc */
    /* rlwinm r0, r16, 2, 0x16, 0x1d */
    /* lwzx r3, r3, r0 */
    /* 0x80538618() */
    /* addi r16, r16, 1 */
    /* r4 = r14+0x0 */
    /* clrlwi r3, r16, 0x18 */
    /* r0 = r4+0x24 */
    /* cmplw r3, r0 */
    /* if (cr0 <) goto 0x805309d0 */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x8053093c: 40 82 00 18              bne      0x80530954 */
/* 0x80530940: 80 7e 00 00              lwz      r3, 0(r30) */
/* 0x80530944: 80 63 00 0c              lwz      r3, 0xc(r3) */
/* 0x80530948: 7c 63 98 2e              lwzx     r3, r3, r19 */
/* 0x8053094c: a0 63 00 22              lhz      r3, 0x22(r3) */
/* 0x80530950: 48 00 00 0c              b        0x8053095c */
/* 0x80530954: 7c 74 ba 14              add      r3, r20, r23 */
/* 0x80530958: 88 63 ff ff              lbz      r3, -1(r3) */
/* 0x8053095c: a0 04 00 e0              lhz      r0, 0xe0(r4) */
/* 0x80530960: 7c 00 1a 14              add      r0, r0, r3 */
/* 0x80530964: b0 04 00 e2              sth      r0, 0xe2(r4) */
/* 0x80530968: 3a 31 00 01              addi     r17, r17, 1 */
/* 0x8053096c: 56 20 06 3e              clrlwi   r0, r17, 0x18 */
/* 0x80530970: 7c 00 b0 40              cmplw    r0, r22 */
/* 0x80530974: 41 80 fd 78              blt      0x805306ec */
/* 0x80530978: 39 c1 00 08              addi     r14, r1, 8 */
/* 0x8053097c: 3a 00 00 00              li       r16, 0 */
/* 0x80530980: 48 00 00 24              b        0x805309a4 */
/* 0x80530984: 56 03 06 3e              clrlwi   r3, r16, 0x18 */
/* 0x80530988: 56 00 0d fc              rlwinm   r0, r16, 1, 0x17, 0x1e */
/* 0x8053098c: 1c 63 00 f0              mulli    r3, r3, 0xf0 */
/* 0x80530990: 7c 8e 02 ae              lhax     r4, r14, r0 */
/* 0x80530994: 7c 6f 1a 14              add      r3, r15, r3 */
/* 0x80530998: 38 63 00 ec              addi     r3, r3, 0xec */
/* 0x8053099c: 4b ff ec c9              bl       0x8052f664 */
/* 0x805309a0: 3a 10 00 01              addi     r16, r16, 1 */
/* 0x805309a4: 56 00 06 3e              clrlwi   r0, r16, 0x18 */
/* 0x805309a8: 7c 00 b0 40              cmplw    r0, r22 */
/* 0x805309ac: 41 80 ff d8              blt      0x80530984 */
/* 0x805309b0: 80 0f 0b 50              lwz      r0, 0xb50(r15) */
/* 0x805309b4: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x805309b8: 40 82 00 58              bne      0x80530a10 */
/* 0x805309bc: 3c 60 00 00              lis      r3, 0 */
/* 0x805309c0: 3a 00 00 00              li       r16, 0 */
/* 0x805309c4: 81 e3 00 00              lwz      r15, 0(r3) */
/* 0x805309c8: 3d c0 00 00              lis      r14, 0 */
/* 0x805309cc: 48 00 00 30              b        0x805309fc */
/* 0x805309d0: 56 00 06 3e              clrlwi   r0, r16, 0x18 */
/* 0x805309d4: 1c 00 00 f0              mulli    r0, r0, 0xf0 */
/* 0x805309d8: 7c 64 02 14              add      r3, r4, r0 */
/* 0x805309dc: 80 03 00 38              lwz      r0, 0x38(r3) */
/* 0x805309e0: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x805309e4: 40 82 00 14              bne      0x805309f8 */
/* 0x805309e8: 80 6f 00 0c              lwz      r3, 0xc(r15) */
/* 0x805309ec: 56 00 15 ba              rlwinm   r0, r16, 2, 0x16, 0x1d */
/* 0x805309f0: 7c 63 00 2e              lwzx     r3, r3, r0 */
/* 0x805309f4: 48 00 7c 25              bl       0x80538618 */
/* 0x805309f8: 3a 10 00 01              addi     r16, r16, 1 */
/* 0x805309fc: 80 8e 00 00              lwz      r4, 0(r14) */
/* 0x80530a00: 56 03 06 3e              clrlwi   r3, r16, 0x18 */
/* 0x80530a04: 88 04 00 24              lbz      r0, 0x24(r4) */
/* 0x80530a08: 7c 03 00 40              cmplw    r3, r0 */
/* 0x80530a0c: 41 80 ff c4              blt      0x805309d0 */
#endif


/* === DISASSEMBLY === */

; Function: clear__Q26System10RaceConfigFv
; Demangled: clear__System10RaceConfigFv
; Address: 0x8053093c  (.text+0x1e0a0)
; Size: 492 bytes

  0x8053093c:  bne      0x80530954
  0x80530940:  lwz      r3, 0(r30)
  0x80530944:  lwz      r3, 0xc(r3)
  0x80530948:  lwzx     r3, r3, r19
  0x8053094c:  lhz      r3, 0x22(r3)
  0x80530950:  b        0x8053095c
  0x80530954:  add      r3, r20, r23
  0x80530958:  lbz      r3, -1(r3)
  0x8053095c:  lhz      r0, 0xe0(r4)
  0x80530960:  add      r0, r0, r3
  0x80530964:  sth      r0, 0xe2(r4)
  0x80530968:  addi     r17, r17, 1
  0x8053096c:  clrlwi   r0, r17, 0x18
  0x80530970:  cmplw    r0, r22
  0x80530974:  blt      0x805306ec
  0x80530978:  addi     r14, r1, 8
  0x8053097c:  li       r16, 0
  0x80530980:  b        0x805309a4
  0x80530984:  clrlwi   r3, r16, 0x18
  0x80530988:  rlwinm   r0, r16, 1, 0x17, 0x1e
  0x8053098c:  mulli    r3, r3, 0xf0
  0x80530990:  lhax     r4, r14, r0
  0x80530994:  add      r3, r15, r3
  0x80530998:  addi     r3, r3, 0xec
  0x8053099c:  bl       0x8052f664
  0x805309a0:  addi     r16, r16, 1
  0x805309a4:  clrlwi   r0, r16, 0x18
  0x805309a8:  cmplw    r0, r22
  0x805309ac:  blt      0x80530984
  0x805309b0:  lwz      r0, 0xb50(r15)
  0x805309b4:  cmpwi    r0, 0
  0x805309b8:  bne      0x80530a10
  0x805309bc:  lis      r3, 0
  0x805309c0:  li       r16, 0
  0x805309c4:  lwz      r15, 0(r3)
  0x805309c8:  lis      r14, 0
  0x805309cc:  b        0x805309fc
  0x805309d0:  clrlwi   r0, r16, 0x18
  0x805309d4:  mulli    r0, r0, 0xf0
  0x805309d8:  add      r3, r4, r0
  0x805309dc:  lwz      r0, 0x38(r3)
  0x805309e0:  cmpwi    r0, 0
  0x805309e4:  bne      0x805309f8
  0x805309e8:  lwz      r3, 0xc(r15)
  0x805309ec:  rlwinm   r0, r16, 2, 0x16, 0x1d
  0x805309f0:  lwzx     r3, r3, r0
  0x805309f4:  bl       0x80538618
  0x805309f8:  addi     r16, r16, 1
  0x805309fc:  lwz      r4, 0(r14)
  0x80530a00:  clrlwi   r3, r16, 0x18
  0x80530a04:  lbz      r0, 0x24(r4)
  0x80530a08:  cmplw    r3, r0
  0x80530a0c:  blt      0x805309d0
