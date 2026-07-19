/* Function at 0x8086B260, size=16 bytes */
/* Stack frame: 368 bytes */

void FUN_8086B260(void)
{
    /* Stack frame: -368(r1) */
    *(0x174 + r1) = r0; // stw @ 0x8086B268
    /* stfd f31, 0x160(r1) */ // 0x8086B26C
}