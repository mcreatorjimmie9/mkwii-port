/* Function at 0x806EB1B4, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_806EB1B4(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806EB1C0
    r31 = r3;
    r0 = *(0 + r3); // lbz @ 0x806EB1C8
    if (==) goto 0x0x806eb1f0;
    FUN_806EB550(); // bl 0x806EB550
    r3 = r31;
    FUN_806EB618(r3); // bl 0x806EB618
    r3 = r31;
    FUN_806EB768(r3, r3); // bl 0x806EB768
    r3 = r31;
    FUN_806EB8C4(r3, r3, r3); // bl 0x806EB8C4
    r0 = *(0x14 + r1); // lwz @ 0x806EB1F0
    r31 = *(0xc + r1); // lwz @ 0x806EB1F4
    return;
}