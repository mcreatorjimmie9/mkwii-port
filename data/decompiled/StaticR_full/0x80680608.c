/* Function at 0x80680608, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_80680608(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80680618
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80680620
    r30 = r3;
    if (==) goto 0x0x80680670;
    if (==) goto 0x0x80680660;
    /* li r4, -1 */ // 0x80680630
    r3 = r3 + 0x33c; // 0x80680634
    FUN_8066D2B4(r4, r3); // bl 0x8066D2B4
    r3 = r30 + 0x1c8; // 0x8068063C
    /* li r4, -1 */ // 0x80680640
    FUN_80670FE0(r4, r3, r3, r4); // bl 0x80670FE0
    r3 = r30 + 0x44; // 0x80680648
    /* li r4, -1 */ // 0x8068064C
    FUN_80670AB8(r3, r4, r3, r4); // bl 0x80670AB8
    r3 = r30;
    /* li r4, 0 */ // 0x80680658
    FUN_80672580(r3, r4, r3, r4); // bl 0x80672580
    if (<=) goto 0x0x80680670;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80680674
    r30 = *(8 + r1); // lwz @ 0x80680678
    r0 = *(0x14 + r1); // lwz @ 0x8068067C
    return;
}