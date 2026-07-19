/**
 * ItemHolderItem_update
 * @addr 0x80798958
 * @size 1308 bytes
 * @frame 0 bytes
 */
void ItemHolderItem_update(void) {
    /* f0 = *(f32*)(r7+0x24) */
}

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x80798958: c0 07 00 24              lfs      f0, 0x24(r7) */
#endif


/* === DISASSEMBLY === */

; Function: ItemHolderItem_update
; Demangled: ItemHolderItem_update
; Address: 0x80798958  (.text+0x2860bc)
; Size: 1308 bytes

  0x80798958:  lfs      f0, 0x24(r7)
