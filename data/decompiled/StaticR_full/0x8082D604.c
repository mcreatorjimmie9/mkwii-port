/* Function at 0x8082D604, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8082D604(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8082D610
    r31 = r3;
    r0 = *(0x78 + r3); // lwz @ 0x8082D618
    r3 = r0 rlwinm 0x1b; // rlwinm
    FUN_8085841C(); // bl 0x8085841C
    r0 = *(0x160 + r31); // lwz @ 0x8082D624
    r31 = *(0xc + r1); // lwz @ 0x8082D628
    /* subf r3, r3, r0 */ // 0x8082D62C
    r0 = *(0x14 + r1); // lwz @ 0x8082D630
    r3 = r3 + 2; // 0x8082D634
    return;
}