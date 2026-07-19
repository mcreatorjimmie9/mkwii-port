/* Function at 0x80674958, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80674958(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x80674960
    *(0x14 + r1) = r0; // stw @ 0x80674964
    /* li r0, -1 */ // 0x80674968
    *(0xc + r1) = r31; // stw @ 0x8067496C
    r31 = r3;
    *(0xcc0 + r3) = r0; // stw @ 0x80674974
    r3 = r3 + 0x694; // 0x80674978
    FUN_80649EEC(r3); // bl 0x80649EEC
    r3 = r31 + 0xb4c; // 0x80674980
    /* li r4, 0x9ca */ // 0x80674984
    /* li r5, 0 */ // 0x80674988
    FUN_808D5A00(r3, r3, r4, r5); // bl 0x808D5A00
    r0 = *(0x14 + r1); // lwz @ 0x80674990
    r31 = *(0xc + r1); // lwz @ 0x80674994
    return;
}