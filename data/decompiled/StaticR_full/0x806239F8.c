/* Function at 0x806239F8, size=16 bytes */
/* Stack frame: 64 bytes */

void FUN_806239F8(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x80623A00
    /* stfd f31, 0x30(r1) */ // 0x80623A04
}