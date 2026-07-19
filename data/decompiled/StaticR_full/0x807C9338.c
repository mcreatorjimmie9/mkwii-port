/* Function at 0x807C9338, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807C9338(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807C9344
    r31 = r3;
    r4 = *(0xbc + r3); // lwz @ 0x807C934C
    r3 = *(8 + r4); // lwz @ 0x807C9350
    FUN_807C22EC(); // bl 0x807C22EC
    r3 = *(0xbc + r31); // lwz @ 0x807C9358
    r3 = *(0 + r3); // lwz @ 0x807C935C
    FUN_8061DFF8(); // bl 0x8061DFF8
    r4 = *(0x254 + r3); // lhz @ 0x807C9364
    /* li r0, 0 */ // 0x807C9368
    r4 = r4 | 8; // 0x807C936C
    *(0x254 + r3) = r4; // sth @ 0x807C9370
    r3 = *(0xbc + r31); // lwz @ 0x807C9374
    r3 = *(0 + r3); // lwz @ 0x807C9378
    r3 = *(0 + r3); // lwz @ 0x807C937C
    r4 = *(4 + r3); // lwz @ 0x807C9380
    r3 = *(8 + r4); // lwz @ 0x807C9384
    r3 = r3 | 0x400; // 0x807C9388
    *(8 + r4) = r3; // stw @ 0x807C938C
    *(0xf8 + r31) = r0; // stw @ 0x807C9390
    *(0xf4 + r31) = r0; // stw @ 0x807C9394
    r31 = *(0xc + r1); // lwz @ 0x807C9398
    r0 = *(0x14 + r1); // lwz @ 0x807C939C
    return;
}