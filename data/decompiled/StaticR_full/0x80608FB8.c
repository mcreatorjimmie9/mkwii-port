/* Function at 0x80608FB8, size=16 bytes */
/* Stack frame: 32 bytes */

void FUN_80608FB8(void)
{
    /* Stack frame: -32(r1) */
    *(0x24 + r1) = r0; // stw @ 0x80608FC0
    /* stfd f31, 0x10(r1) */ // 0x80608FC4
}