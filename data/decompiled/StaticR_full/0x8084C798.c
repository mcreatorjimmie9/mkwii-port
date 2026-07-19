/* Function at 0x8084C798, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8084C798(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r5 = *(0 + r4); // lwz @ 0x8084C7A0
    r0 = *(0 + r4); // lwz @ 0x8084C7A8
    *(0xc + r1) = r31; // stw @ 0x8084C7AC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8084C7B8
    r30 = r3;
    *(0x18 + r3) = r5; // stw @ 0x8084C7C0
    if (!=) goto 0x0x8084c7e4;
    /* lis r3, 0 */ // 0x8084C7C8
    /* lis r5, 0 */ // 0x8084C7CC
    r3 = r3 + 0; // 0x8084C7D0
    /* li r4, 0x53 */ // 0x8084C7D4
    r5 = r5 + 0; // 0x8084C7D8
    /* crclr cr1eq */ // 0x8084C7DC
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    r3 = *(0 + r31); // lwz @ 0x8084C7E4
    if (==) goto 0x0x8084c7f8;
    r0 = *(0x10 + r3); // lwz @ 0x8084C7F0
    /* b 0x8084c7fc */ // 0x8084C7F4
    /* li r0, 0 */ // 0x8084C7F8
    *(0x1c + r30) = r0; // stw @ 0x8084C7FC
    r31 = *(0xc + r1); // lwz @ 0x8084C800
    r30 = *(8 + r1); // lwz @ 0x8084C804
    r0 = *(0x14 + r1); // lwz @ 0x8084C808
    return;
}