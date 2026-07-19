/* Function at 0x80890DF4, size=16 bytes */
/* Stack frame: 80 bytes */

void FUN_80890DF4(void)
{
    /* Stack frame: -80(r1) */
    *(0x54 + r1) = r0; // stw @ 0x80890DFC
    /* stfd f31, 0x40(r1) */ // 0x80890E00
}