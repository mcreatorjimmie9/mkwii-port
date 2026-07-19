/* Function at 0x806994F0, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806994F0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806994FC
    r31 = r3;
    FUN_8069FC84(); // bl 0x8069FC84
    r0 = *(0x2e4 + r31); // lbz @ 0x80699508
    r4 = *(0xa0 + r31); // lwz @ 0x8069950C
    *(0x2e0 + r31) = r4; // stw @ 0x80699514
    if (==) goto 0x0x80699524;
    r3 = r31 + 0x21c; // 0x8069951C
    FUN_806692E0(r3); // bl 0x806692E0
    r0 = *(0x52c + r31); // lbz @ 0x80699524
    r4 = *(0xa0 + r31); // lwz @ 0x80699528
    *(0x528 + r31) = r4; // stw @ 0x80699530
    if (==) goto 0x0x80699540;
    r3 = r31 + 0x464; // 0x80699538
    FUN_806692E0(r3); // bl 0x806692E0
    r0 = *(0x14 + r1); // lwz @ 0x80699540
    r31 = *(0xc + r1); // lwz @ 0x80699544
    return;
}