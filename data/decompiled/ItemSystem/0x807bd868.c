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

; Function: ItemSlotData_checkSpawnTimer
; Demangled: ItemSlotData_checkSpawnTimer
; Address: 0x807bd868  (.text+0x2aafcc)
; Size: 172 bytes

  0x807bd868:  addi     r1, r1, 0xb0
  0x807bd86c:  blr      
  0x807bd870:  stwu     r1, -0xb0(r1)
  0x807bd874:  mflr     r0
  0x807bd878:  stw      r0, 0xb4(r1)
  0x807bd87c:  stfd     f31, 0xa0(r1)
