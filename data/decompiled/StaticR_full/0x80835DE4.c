/* Function at 0x80835DE4, size=112 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_80835DE4(int r3, int r4)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    *(0x4c + r1) = r31; // stw @ 0x80835DF0
    r31 = r3;
    FUN_8082B688(); // bl 0x8082B688
    r3 = r31;
    /* li r4, 0 */ // 0x80835E00
    FUN_8083BE5C(r3, r4); // bl 0x8083BE5C
    if (==) goto 0x0x80835f08;
    r3 = r31;
    FUN_8082B664(r4, r3); // bl 0x8082B664
    r3 = *(0x9c + r31); // lwz @ 0x80835E18
    r3 = *(0x10 + r3); // lwz @ 0x80835E1C
    r3 = *(0 + r3); // lwz @ 0x80835E20
    if (==) goto 0x0x80835e3c;
    r3 = r3 + 0xc; // 0x80835E2C
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* b 0x80835e44 */ // 0x80835E38
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r0 = *(0x2c0 + r31); // lhz @ 0x80835E44
    if (>=) goto 0x0x80835eac;
    r4 = *(0x74 + r31); // lwz @ 0x80835E50
}