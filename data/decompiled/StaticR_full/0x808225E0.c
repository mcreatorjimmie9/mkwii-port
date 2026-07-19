/* Function at 0x808225E0, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_808225E0(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808225EC
    r31 = r3;
    FUN_8061DA08(); // bl 0x8061DA08
    /* li r0, 0 */ // 0x808225F8
    *(0xc + r31) = r0; // sth @ 0x808225FC
    r3 = r31 + 0x54; // 0x80822600
    FUN_8083F588(r3); // bl 0x8083F588
    r3 = r31 + 0x88; // 0x80822608
    FUN_80841738(r3, r3); // bl 0x80841738
    r3 = r31 + 0xb4; // 0x80822610
    FUN_8081C7F4(r3, r3, r3); // bl 0x8081C7F4
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x8082261C
    r0 = *(0x14 + r1); // lwz @ 0x80822620
    return;
}