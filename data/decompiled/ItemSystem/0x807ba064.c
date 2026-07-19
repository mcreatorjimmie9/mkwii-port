/**
 * ItemHolderPlayer_useLightning
 * @addr 0x807ba064
 * @size 136 bytes
 * @frame 0 bytes
 */
void ItemHolderPlayer_useLightning(void) {
    /* mulli r11, r11, 0xc */
    /* add r11, r31, r11 */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x807ba064: 1d 6b 00 0c              mulli    r11, r11, 0xc */
/* 0x807ba068: 7d 7f 5a 14              add      r11, r31, r11 */
#endif


/* === DISASSEMBLY === */

; Function: ItemHolderPlayer_useLightning
; Demangled: ItemHolderPlayer_useLightning
; Address: 0x807ba064  (.text+0x2a77c8)
; Size: 136 bytes

  0x807ba064:  mulli    r11, r11, 0xc
  0x807ba068:  add      r11, r31, r11
