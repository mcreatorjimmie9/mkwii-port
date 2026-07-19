/* Function at 0x806AC1DC, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806AC1DC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806AC1E8
    r31 = r3;
    r4 = *(0x254 + r3); // lwz @ 0x806AC1F0
    r0 = r4 + 1; // 0x806AC1F4
    *(0x254 + r3) = r0; // stw @ 0x806AC1F8
    if (<=) goto 0x0x806ac208;
    FUN_806AC254(); // bl 0x806AC254
    r3 = *(0x258 + r31); // lwz @ 0x806AC208
    r0 = r3 + -1; // 0x806AC20C
    if (>) goto 0x0x806ac238;
    r3 = r31;
    FUN_8064A340(r3); // bl 0x8064A340
    if (==) goto 0x0x806ac238;
    r3 = r31;
    /* li r4, 0x40 */ // 0x806AC22C
    /* li r5, -1 */ // 0x806AC230
    FUN_806A03F0(r3, r4, r5); // bl 0x806A03F0
    r0 = *(0x14 + r1); // lwz @ 0x806AC238
    r31 = *(0xc + r1); // lwz @ 0x806AC23C
    return;
}