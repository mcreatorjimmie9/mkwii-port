/* Function at 0x80849AFC, size=16 bytes */
/* Stack frame: 112 bytes */

void FUN_80849AFC(void)
{
    /* Stack frame: -112(r1) */
    *(0x74 + r1) = r0; // stw @ 0x80849B04
    /* stfd f31, 0x60(r1) */ // 0x80849B08
}