/* Function at 0x806E5DC0, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_806E5DC0(void)
{
    /* li r0, 1 */ // 0x806E5DC0
    *(0x2755 + r3) = r0; // stb @ 0x806E5DC4
    return;
}