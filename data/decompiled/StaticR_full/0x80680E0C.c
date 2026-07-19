/* Function at 0x80680E0C, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_80680E0C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80680E1C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80680E24
    r30 = r3;
    if (==) goto 0x0x80680e74;
    if (==) goto 0x0x80680e64;
    /* li r4, -1 */ // 0x80680E34
    r3 = r3 + 0x33c; // 0x80680E38
    FUN_8066D2B4(r4, r3); // bl 0x8066D2B4
    r3 = r30 + 0x1c8; // 0x80680E40
    /* li r4, -1 */ // 0x80680E44
    FUN_80670FE0(r4, r3, r3, r4); // bl 0x80670FE0
    r3 = r30 + 0x44; // 0x80680E4C
    /* li r4, -1 */ // 0x80680E50
    FUN_80670AB8(r3, r4, r3, r4); // bl 0x80670AB8
    r3 = r30;
    /* li r4, 0 */ // 0x80680E5C
    FUN_80672580(r3, r4, r3, r4); // bl 0x80672580
    if (<=) goto 0x0x80680e74;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80680E78
    r30 = *(8 + r1); // lwz @ 0x80680E7C
    r0 = *(0x14 + r1); // lwz @ 0x80680E80
    return;
}