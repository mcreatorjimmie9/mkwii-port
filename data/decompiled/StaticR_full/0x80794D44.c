/* Function at 0x80794D44, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 6 function(s) */

int FUN_80794D44(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80794D50
    r31 = r3;
    r3 = r3 + 0x94; // 0x80794D58
    FUN_8078FECC(r3); // bl 0x8078FECC
    r3 = *(0xbc + r31); // lwz @ 0x80794D60
    if (==) goto 0x0x80794d74;
    /* li r4, 0 */ // 0x80794D6C
    FUN_805E3430(r4); // bl 0x805E3430
    r3 = *(0xc0 + r31); // lwz @ 0x80794D74
    if (==) goto 0x0x80794d88;
    /* li r4, 0 */ // 0x80794D80
    FUN_805E3430(r4); // bl 0x805E3430
    r3 = *(0xc4 + r31); // lwz @ 0x80794D88
    if (==) goto 0x0x80794d9c;
    /* li r4, 0 */ // 0x80794D94
    FUN_805E3430(r4); // bl 0x805E3430
    r3 = *(0xc8 + r31); // lwz @ 0x80794D9C
    if (==) goto 0x0x80794db0;
    /* li r4, 0 */ // 0x80794DA8
    FUN_805E3430(r4); // bl 0x805E3430
    r3 = *(0xb8 + r31); // lwz @ 0x80794DB0
    FUN_805E3430(r4); // bl 0x805E3430
}