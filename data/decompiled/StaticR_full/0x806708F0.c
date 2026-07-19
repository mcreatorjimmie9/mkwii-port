/* Function at 0x806708F0, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806708F0(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806708FC
    r31 = r3;
    r0 = *(0xf4 + r3); // lwz @ 0x80670904
    if (<) goto 0x0x80670924;
    FUN_805B9C50(); // bl 0x805B9C50
    /* li r3, -1 */ // 0x80670914
    /* li r0, 0 */ // 0x80670918
    *(0xf4 + r31) = r3; // stw @ 0x8067091C
    *(0xe8 + r31) = r0; // stw @ 0x80670920
    r0 = *(0x14 + r1); // lwz @ 0x80670924
    r31 = *(0xc + r1); // lwz @ 0x80670928
    return;
}