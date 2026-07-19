/* Function at 0x807CDAF8, size=384 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 12 function(s) */

int FUN_807CDAF8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    r4 = r3 + 0xe8; // 0x807CDB00
    *(0x2c + r1) = r31; // stw @ 0x807CDB08
    r31 = r3;
    *(0x28 + r1) = r30; // stw @ 0x807CDB10
    FUN_807CCF6C(r4); // bl 0x807CCF6C
    r3 = r31;
    FUN_807CB8AC(r3); // bl 0x807CB8AC
    r3 = r31;
    FUN_807CB7B0(r3, r3); // bl 0x807CB7B0
    r3 = r31;
    FUN_807CB5D8(r3, r3, r3); // bl 0x807CB5D8
    r0 = *(0x34b + r31); // lbz @ 0x807CDB30
    if (==) goto 0x0x807cdb74;
    r0 = *(0x349 + r31); // lbz @ 0x807CDB3C
    if (==) goto 0x0x807cdb58;
    r3 = r31 + 0xb0; // 0x807CDB48
    r4 = r31 + 0x2a8; // 0x807CDB4C
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    /* b 0x807cdca4 */ // 0x807CDB54
    r0 = *(0x348 + r31); // lbz @ 0x807CDB58
    if (==) goto 0x0x807cdca4;
    r3 = r31 + 0xb0; // 0x807CDB64
    r4 = r31 + 0x224; // 0x807CDB68
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    /* b 0x807cdca4 */ // 0x807CDB70
    r0 = *(0x349 + r31); // lbz @ 0x807CDB74
    if (==) goto 0x0x807cdb90;
    r3 = r31 + 0xb0; // 0x807CDB80
    r4 = r31 + 0x250; // 0x807CDB84
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    /* b 0x807cdca4 */ // 0x807CDB8C
    r0 = *(0x348 + r31); // lbz @ 0x807CDB90
    if (==) goto 0x0x807cdbac;
    r3 = r31 + 0xb0; // 0x807CDB9C
    r4 = r31 + 0x1f8; // 0x807CDBA0
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    /* b 0x807cdca4 */ // 0x807CDBA8
    r3 = *(0xec + r31); // lwz @ 0x807CDBAC
    FUN_807CBDD0(r3, r4); // bl 0x807CBDD0
    r5 = *(0x33c + r31); // lwz @ 0x807CDBB4
    /* lis r4, 0 */ // 0x807CDBB8
    r30 = r3;
    r5 = r5 + 1; // 0x807CDBC0
    *(0x33c + r31) = r5; // stw @ 0x807CDBC4
    r6 = *(0 + r4); // lha @ 0x807CDBC8
    if (<=) goto 0x0x807cdbdc;
    r5 = r6;
    /* b 0x807cdbe8 */ // 0x807CDBD8
    if (>=) goto 0x0x807cdbe8;
    /* li r5, 0 */ // 0x807CDBE4
    *(0x33c + r31) = r5; // stw @ 0x807CDBEC
    if (<) goto 0x0x807cdca4;
    /* lis r4, 0 */ // 0x807CDBF4
    r0 = *(0 + r4); // lha @ 0x807CDBF8
    if (<) goto 0x0x807cdca4;
    if (>=) goto 0x0x807cdc18;
    r0 = *(0x338 + r31); // lwz @ 0x807CDC0C
    if (==) goto 0x0x807cdca4;
    r4 = r31;
    FUN_807CB4DC(r4, r3); // bl 0x807CB4DC
    r5 = r31 + 0x2ec; // 0x807CDC2C
    FUN_805A4498(r3, r3, r4, r5); // bl 0x805A4498
    /* lis r3, 0 */ // 0x807CDC34
    /* lfs f0, 8(r1) */ // 0x807CDC38
    /* lfs f3, 0(r3) */ // 0x807CDC3C
    /* fmuls f1, f0, f0 */ // 0x807CDC40
    /* lfs f2, 0x10(r1) */ // 0x807CDC44
    /* fmuls f0, f3, f3 */ // 0x807CDC48
    /* stfs f3, 0xc(r1) */ // 0x807CDC4C
    /* fmuls f2, f2, f2 */ // 0x807CDC50
    /* fadds f0, f1, f0 */ // 0x807CDC54
    /* fadds f1, f2, f0 */ // 0x807CDC58
    FUN_805E3430(); // bl 0x805E3430
    /* lfs f0, 0x334(r31) */ // 0x807CDC60
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807CDC64
    if (<=) goto 0x0x807cdc74;
    /* li r0, 1 */ // 0x807CDC6C
    /* b 0x807cdc78 */ // 0x807CDC70
    /* li r0, 0 */ // 0x807CDC74
}