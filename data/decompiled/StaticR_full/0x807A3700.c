/* Function at 0x807A3700, size=76 bytes */
/* Stack frame: 16 bytes */
/* Calls: 10 function(s) */

void FUN_807A3700(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x807A3708
    FUN_8078CE24(); // bl 0x8078CE24
    FUN_807AA858(); // bl 0x807AA858
    FUN_80787780(); // bl 0x80787780
    FUN_80788C48(); // bl 0x80788C48
    FUN_80789238(); // bl 0x80789238
    FUN_807A0060(); // bl 0x807A0060
    /* lis r3, 0 */ // 0x807A3724
    r3 = *(0 + r3); // lwz @ 0x807A3728
    FUN_8078D8AC(r3); // bl 0x8078D8AC
    FUN_8078D660(r3); // bl 0x8078D660
    FUN_808F6AD4(r3); // bl 0x808F6AD4
    FUN_808F73F8(r3); // bl 0x808F73F8
    r0 = *(0x14 + r1); // lwz @ 0x807A373C
    return;
}