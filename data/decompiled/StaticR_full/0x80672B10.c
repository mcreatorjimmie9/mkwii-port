/* Function at 0x80672B10, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80672B10(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* mulli r0, r4, 0x184 */ // 0x80672B1C
    *(0xc + r1) = r31; // stw @ 0x80672B20
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80672B28
    r30 = r3;
    r3 = r3 + r0; // 0x80672B30
    r3 = r3 + 0x44; // 0x80672B34
    FUN_80670D2C(r3); // bl 0x80670D2C
    r3 = r30;
    r5 = r31;
    /* li r4, 0x20 */ // 0x80672B44
    FUN_806724B8(r3, r3, r5, r4); // bl 0x806724B8
    r0 = *(0x14 + r1); // lwz @ 0x80672B4C
    r31 = *(0xc + r1); // lwz @ 0x80672B50
    r30 = *(8 + r1); // lwz @ 0x80672B54
    return;
}