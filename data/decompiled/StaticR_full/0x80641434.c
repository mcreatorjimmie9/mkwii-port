/* Function at 0x80641434, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80641434(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r4 = r3 + 8; // 0x8064143C
    *(0xc + r1) = r31; // stw @ 0x80641444
    /* li r31, 0 */ // 0x80641448
    *(8 + r1) = r30; // stw @ 0x8064144C
    r30 = r3;
    *(0 + r3) = r31; // sth @ 0x80641454
    r3 = r4;
    *(0 + r4) = r31; // stw @ 0x8064145C
    FUN_80641394(r3); // bl 0x80641394
    /* lis r4, 0 */ // 0x80641464
    /* lis r3, 0 */ // 0x80641468
    /* lfs f0, 0(r3) */ // 0x8064146C
    r3 = r30 + 8; // 0x80641470
    /* lfs f1, 0(r4) */ // 0x80641474
    *(0x8c + r30) = r31; // stw @ 0x80641478
    *(0x90 + r30) = r31; // stw @ 0x8064147C
    /* stfs f1, 0x94(r30) */ // 0x80641480
    /* stfs f0, 0x98(r30) */ // 0x80641484
    FUN_80641394(); // bl 0x80641394
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80641490
    r30 = *(8 + r1); // lwz @ 0x80641494
    r0 = *(0x14 + r1); // lwz @ 0x80641498
    return;
}