/* Function at 0x806EAB7C, size=16 bytes */
/* Stack frame: 0 bytes */

int FUN_806EAB7C(int r3, int r4)
{
    /* slwi r0, r4, 2 */ // 0x806EAB7C
    r3 = r3 + r0; // 0x806EAB80
    r3 = *(0x38 + r3); // lwz @ 0x806EAB84
    return;
}