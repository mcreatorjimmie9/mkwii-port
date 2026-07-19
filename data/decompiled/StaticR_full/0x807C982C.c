/* Function at 0x807C982C, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807C982C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807C9838
    r31 = r3;
    r4 = *(0xbc + r3); // lwz @ 0x807C9840
    r3 = *(8 + r4); // lwz @ 0x807C9844
    FUN_807C230C(); // bl 0x807C230C
    r3 = *(0xbc + r31); // lwz @ 0x807C984C
    r3 = *(0 + r3); // lwz @ 0x807C9850
    FUN_8061DFF8(); // bl 0x8061DFF8
    r0 = *(0x254 + r3); // lhz @ 0x807C9858
    r0 = r0 rlwinm 0; // rlwinm
    *(0x254 + r3) = r0; // sth @ 0x807C9860
    r3 = *(0xbc + r31); // lwz @ 0x807C9864
    r3 = *(0 + r3); // lwz @ 0x807C9868
    r3 = *(0 + r3); // lwz @ 0x807C986C
    r3 = *(4 + r3); // lwz @ 0x807C9870
    r0 = *(8 + r3); // lwz @ 0x807C9874
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r3) = r0; // stw @ 0x807C987C
    r31 = *(0xc + r1); // lwz @ 0x807C9880
    r0 = *(0x14 + r1); // lwz @ 0x807C9884
    return;
}