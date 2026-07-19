/* Function at 0x80818554, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_80818554(int r4)
{
    /* lis r4, 0 */ // 0x80818554
    *(0 + r4) = r3; // stw @ 0x80818558
    return;
}