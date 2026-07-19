/* Function at 0x8062AA9C, size=16 bytes */
/* Stack frame: 0 bytes */

void FUN_8062AA9C(int r4)
{
    /* lis r4, 0 */ // 0x8062AA9C
    r4 = r4 + 0; // 0x8062AAA0
    *(0 + r3) = r4; // stw @ 0x8062AAA4
    return;
}