/* Function at 0x8068094C, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_8068094C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8068095C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80680964
    r30 = r3;
    if (==) goto 0x0x806809b4;
    if (==) goto 0x0x806809a4;
    /* li r4, -1 */ // 0x80680974
    r3 = r3 + 0x33c; // 0x80680978
    FUN_8066D2B4(r4, r3); // bl 0x8066D2B4
    r3 = r30 + 0x1c8; // 0x80680980
    /* li r4, -1 */ // 0x80680984
    FUN_80670FE0(r4, r3, r3, r4); // bl 0x80670FE0
    r3 = r30 + 0x44; // 0x8068098C
    /* li r4, -1 */ // 0x80680990
    FUN_80670AB8(r3, r4, r3, r4); // bl 0x80670AB8
    r3 = r30;
    /* li r4, 0 */ // 0x8068099C
    FUN_80672580(r3, r4, r3, r4); // bl 0x80672580
    if (<=) goto 0x0x806809b4;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806809B8
    r30 = *(8 + r1); // lwz @ 0x806809BC
    r0 = *(0x14 + r1); // lwz @ 0x806809C0
    return;
}