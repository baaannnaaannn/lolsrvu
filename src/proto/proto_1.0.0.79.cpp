#include "proto_1.0.0.79.hpp"

using ProtoVer = PROTO_VER(1.0.0.79);

std::string_view ProtoVer::name() const { return "1.0.0.79"; }

Span<ProtoNameID const> ProtoVer::pkt_array() const {
    static ProtoNameID const info[] = {
        {"PKT_Dummy", 0x0},
        {"PKT_C2S_ClientConnect_NamedPipe", 0x1},
        {"PKT_CHAT", 0x2},
        {"PKT_C2S_QueryStatusReq", 0x3},
        {"PKT_S2C_QueryStatusAns", 0x4},
        {"PKT_S2C_StartSpawn", 0x5},
        {"PKT_S2C_CreateHero", 0x6},
        {"PKT_S2C_CreateNeutral", 0x7},
        {"PKT_S2C_CreateTurret", 0x8},
        {"PKT_S2C_PlayAnimation", 0x9},
        {"PKT_C2S_PlayEmote", 0xA},
        {"PKT_S2C_PlayEmote", 0xB},
        {"PKT_S2C_EndSpawn", 0xC},
        {"PKT_S2C_StartGame", 0xD},
        {"PKT_S2C_EndGame", 0xE},
        {"PKT_C2S_CharSelected", 0xF},
        {"PKT_C2S_ClientReady", 0x10},
        {"PKT_C2S_ClientFinished", 0x11},
        {"PKT_NPC_UpgradeSpellReq", 0x12},
        {"PKT_NPC_UpgradeSpellAns", 0x13},
        {"PKT_NPC_IssueOrderReq", 0x14},
        {"PKT_FX_Create_Group", 0x15},
        {"PKT_FX_Kill", 0x16},
        {"PKT_UnitApplyDamage", 0x17},
        {"PKT_Pause", 0x18},
        {"PKT_C2S_MapPing", 0x19},
        {"PKT_S2C_MapPing", 0x1A},
        {"PKT_UnitAddGold", 0x1B},
        {"PKT_UnitAddEXP", 0x1C},
        {"PKT_UserMessagesStart", 0x1D},
        {"PKT_NPC_MessageToClient", 0x1E},
        {"PKT_AI_Command", 0x1F},
        {"PKT_CHAR_SpawnPet", 0x20},
        {"PKT_CHAR_SetCooldown", 0x21},
        {"PKT_NPC_Die", 0x22},
        {"PKT_NPC_CastSpellReq", 0x23},
        {"PKT_NPC_CastSpellAns", 0x24},
        {"PKT_NPC_BuffAdd2", 0x25},
        {"PKT_NPC_BuffRenew", 0x26},
        {"PKT_NPC_BuffRemove2", 0x27},
        {"PKT_NPC_SetAutocast", 0x28},
        {"PKT_BuyItemReq", 0x29},
        {"PKT_BuyItemAns", 0x2A},
        {"PKT_RemoveItemReq", 0x2B},
        {"PKT_RemoveItemAns", 0x2C},
        {"PKT_SwapItemReq", 0x2D},
        {"PKT_SwapItemAns", 0x2E},
        {"PKT_UseItemAns", 0x2F},
        {"PKT_NPC_LevelUp", 0x30},
        {"PKT_NPC_InstantStop_Attack", 0x31},
        {"PKT_Barrack_SpawnUnit", 0x32},
        {"PKT_Turret_Fire", 0x33},
        {"PKT_Turret_CreateTurret", 0x34},
        {"pkt32", 0x35},
        {"PKT_Basic_Attack", 0x36},
        {"PKT_Basic_Attack_Pos", 0x37},
        {"PKT_OnEnterVisiblityClient", 0x38},
        {"PKT_OnLeaveVisiblityClient", 0x39},
        {"PKT_OnEnterLocalVisiblityClient", 0x3A},
        {"PKT_OnLeaveLocalVisiblityClient", 0x3B},
        {"PKT_World_SendCamera_Server", 0x3C},
        {"PKT_World_LockCamera_Server", 0x3D},
        {"PKT_SendSelectedObjID", 0x3E},
        {"PKT_UnitApplyHeal", 0x3F},
        {"PKT_MissileReplication", 0x40},
        {"PKT_ServerTick", 0x41},
        {"PKT_DampenerSwitch", 0x42},
        {"PKT_GlobalCombatMessage", 0x43},
        {"PKT_SynchVersionC2S", 0x44},
        {"PKT_SynchVersionS2C", 0x45},
        {"PKT_AI_TargetS2C", 0x46},
        {"PKT_AI_TargetHeroS2C", 0x47},
        {"PKT_SPM_HierarchicalProfilerUpdate", 0x48},
        {"PKT_SPM_HierarchicalMemoryUpdate", 0x49},
        {"PKT_SPM_HierarchicalBBProfileUpdate", 0x4A},
        {"PKT_SPM_SamplingProfilerUpdate", 0x4B},
        {"PKT_SPM_AddBBProfileListener", 0x4C},
        {"PKT_SPM_RemoveBBProfileListener", 0x4D},
        {"PKT_HeroReincarnateAlive", 0x4E},
        {"PKT_HeroReincarnate", 0x4F},
        {"PKT_Building_Die", 0x50},
        {"PKT_SynchSimTimeS2C", 0x51},
        {"PKT_SynchSimTimeC2S", 0x52},
        {"PKT_SyncSimTimeFinalS2C", 0x53},
        {"PKT_WaypointList", 0x54},
        {"PKT_WaypointListHeroWithSpeed", 0x55},
        {"PKT_ServerGameSettings", 0x56},
        {"PKT_NPC_BuffUpdateCount", 0x57},
        {"PKT_C2S_PlayEmoticon", 0x58},
        {"PKT_S2C_PlayEmoticon", 0x59},
        {"PKT_AvatarInfo_Server", 0x5A},
        {"PKT_RemovePerceptionBubble", 0x5B},
        {"PKT_AddUnitPerceptionBubble", 0x5C},
        {"PKT_AddPosPerceptionBubble", 0x5D},
        {"PKT_SpawnMinionS2C", 0x5E},
        {"PKT_S2C_StopAnimation", 0x5F},
        {"PKT_UpdateGoldRedirectTarget", 0x60},
        {"PKT_S2C_ChangeCharacterData", 0x61},
        {"PKT_S2C_PopCharacterData", 0x62},
        {"PKT_S2C_PopAllCharacterData", 0x63},
        {"PKT_S2C_FaceDirection", 0x64},
        {"PKT_S2C_CameraBehavior", 0x65},
        {"PKT_SPM_AddListener", 0x66},
        {"PKT_SPM_RemoveListener", 0x67},
        {"PKT_SPM_AddMemoryListener", 0x68},
        {"PKT_SPM_RemoveMemoryListener", 0x69},
        {"PKT_S2C_DestroyClientMissile", 0x6A},
        {"PKT_S2C_ChainMissileSync", 0x6B},
        {"PKT_MissileReplication_ChainMissile", 0x6C},
        {"PKT_S2C_BotAI", 0x6D},
        {"PKT_S2C_AI_TargetSelection", 0x6E},
        {"PKT_S2C_AI_State", 0x6F},
        {"PKT_OnEvent", 0x70},
        {"PKT_OnDisconnected", 0x71},
        {"PKT_World_SendCamera_Server_Acknologment", 0x72},
        {"PKT_World_SendGameNumber", 0x73},
        {"PKT_NPC_Die_EventHistroy", 0x74},
        {"PKT_C2S_Ping_Load_Info", 0x75},
        {"PKT_S2C_Ping_Load_Info", 0x76},
        {"PKT_C2S_Exit", 0x77},
        {"PKT_S2C_Exit", 0x78},
        {"PKT_C2S_Reconnect", 0x79},
        {"PKT_S2C_Reconnect", 0x7A},
        {"PKT_S2C_Reconnect_Done", 0x7B},
        {"PKT_Waypoint_Acc", 0x7C},
        {"PKT_WaypointGroup", 0x7D},
        {"PKT_WaypointGroupWithSpeed", 0x7E},
        {"PKT_Connected", 0x7F},
        {"PKT_S2C_ToggleInputLockingFlag", 0x80},
        {"PKT_S2C_ToggleFoW", 0x81},
        {"PKT_S2C_SetCircularCameraRestriction", 0x82},
        {"PKT_S2C_LockCamera", 0x83},
        {"PKT_OnReplication", 0x84},
        {"PKT_OnReplication_Acc", 0x85},
        {"PKT_S2C_MoveCameraToPoint", 0x86},
        {"PKT_S2C_PlayTutorialAudioEvent", 0x87},
        {"PKT_ChangeSlotSpellType", 0x88},
        {"PKT_PausePacket", 0x89},
        {"PKT_ResumePacket", 0x8A},
        {"PKT_SetFrequency", 0x8B},
        {"PKT_SetFadeOut_Push", 0x8C},
        {"PKT_SetFadeOut_Pop", 0x8D},
        {"PKT_S2C_CreateUnitHighlight", 0x8E},
        {"PKT_S2C_RemoveUnitHighlight", 0x8F},
        {"PKT_S2C_OpenTutorialPopup", 0x90},
        {"PKT_C2S_OnTutorialPopupClosed", 0x91},
        {"PKT_S2C_OpenAFKWarningMessage", 0x92},
        {"PKT_S2C_CloseShop", 0x93},
        {"PKT_S2C_SetInputLockingFlag", 0x94},
        {"PKT_C2S_OnShopOpened", 0x95},
        {"PKT_S2C_ShowObjectiveText", 0x96},
        {"PKT_S2C_HideObjectiveText", 0x97},
        {"PKT_S2C_RefreshObjectiveText", 0x98},
        {"PKT_S2C_ShowAuxiliaryText", 0x99},
        {"PKT_S2C_HideAuxiliaryText", 0x9A},
        {"PKT_S2C_RefreshAuxiliaryText", 0x9B},
        {"PKT_S2C_HighlightHUDElement", 0x9C},
        {"PKT_S2C_HighlightShopElement", 0x9D},
        {"PKT_C2S_TeamSurrenderVote", 0x9E},
        {"PKT_S2C_TeamSurrenderVote", 0x9F},
        {"PKT_S2C_TeamSurrenderCountDown", 0xA0},
        {"PKT_S2C_TeamSurrenderStatus", 0xA1},
        {"PKT_S2C_LineMissileHitList", 0xA2},
        {"PKT_C2S_TutorialAudioEventFinished", 0xA3},
        {"PKT_S2C_HighlightTitanBarElement", 0xA4},
        {"PKT_S2C_ToggleUIHighlight", 0xA5},
        {"PKT_S2C_DisplayLocalizedTutorialChatText", 0xA6},
        {"PKT_S2C_ToolTipVars", 0xA7},
        {"PKT_S2C_MuteVolumeCategory", 0xA8},
        {"PKT_S2C_OnEventWorld", 0xA9},
        {"PKT_S2C_AnimatedBuildingSetCurrentSkin", 0xAA},
        {"PKT_S2C_SetGreyscaleEnabledWhenDead", 0xAB},
        {"PKT_S2C_DisableHUDForEndOfGame", 0xAC},
        {"PKT_ChangeSlotSpellName", 0xAD},
        {"PKT_S2C_SwitchNexusesToOnIdleParticles", 0xAE},
        {"PKT_S2C_FadeMinions", 0xAF},
        {"PKT_S2C_FadeOutMainSFX", 0xB0},
        {"PKT_S2C_HeroStats", 0xB1},
        {"PKT_S2C_SetAnimStates", 0xB2},
        {"PKT_ClientCheatDetectionSignal", 0xB3},
        {"PKT_S2C_AddDebugCircle", 0xB4},
        {"PKT_S2C_RemoveDebugCircle", 0xB5},
        {"PKT_S2C_ModifyDebugCircleRadius", 0xB6},
        {"PKT_S2C_ModifyDebugCircleColor", 0xB7},
        {"PKT_Undefined", 0xB8},
        {"PKT_Batched", 0xFF},
    };
    return info;
}

void ProtoVer::read(Data_in& io, PKT_ID& value) const { io.num<uint8_t>(value); }
void ProtoVer::write(Data_out& io, PKT_ID const& value) const { io.num<uint8_t>(value); }

void ProtoVer::read(Data_in& io, CommonBasicAttack& value) const {
    io.num<uint32_t>(value.targetNetId);
    uint8_t extraTime;
    io.num<uint8_t>(extraTime);
    value.extraTime = ((int)extraTime - 128) / 100.0;
    io.num<uint32_t>(value.missileNextID);
    io.num<uint8_t>(value.attackSlot);
}
void ProtoVer::write(Data_out& io, CommonBasicAttack const& value) const {
    io.num<uint32_t>(value.targetNetId);
    uint8_t extraTime = (uint8_t)(unsigned int)(int)((value.extraTime * 100.0) + 128);
    io.num<uint8_t>(extraTime);
    io.num<uint32_t>(value.missileNextID);
    io.num<uint8_t>(value.attackSlot);
}

void ProtoVer::read(Data_in& io, ConnectionInfo& value) const {
    io.num<int32_t>(value.mClientID);
    io.num<int64_t>(value.mPlayerID);
    io.num<float>(value.mPercentage);
    io.num<float>(value.mETA);
    io.bit<uint32_t>(
        field<int32_t, 16>(value.mCount), field<uint32_t, 15>(value.mPing), field<uint32_t, 1>(value.mPad));
    io.num<uint8_t>(value.mReady);
}
void ProtoVer::write(Data_out& io, ConnectionInfo const& value) const {
    io.num<int32_t>(value.mClientID);
    io.num<int64_t>(value.mPlayerID);
    io.num<float>(value.mPercentage);
    io.num<float>(value.mETA);
    io.bit<uint32_t>(
        field<int32_t, 16>(value.mCount), field<uint32_t, 15>(value.mPing), field<uint32_t, 1>(value.mPad));
    io.num<uint8_t>(value.mReady);
}

void ProtoVer::read(Data_in& io, PKT_Basic_Attack_Pos& value) const {
    io.num<uint32_t>(value.fromID);
    read(io, value.data);
    io.num<float>(value.pos.x);
    io.num<float>(value.pos.y);
}
void ProtoVer::write(Data_out& io, PKT_Basic_Attack_Pos const& value) const {
    io.num<uint32_t>(value.fromID);
    write(io, value.data);
    io.num<float>(value.pos.x);
    io.num<float>(value.pos.y);
}

void ProtoVer::read(Data_in& io, PKT_SpawnMinionS2C& value) const {
    io.num<uint32_t>(value.fromID);
    io.num<uint32_t>(value.netObjID);
    io.num<uint8_t>(value.netNodeID);
    io.point3d(value.Pos);
    io.fstr(value.Name, 64);
    io.fstr(value.SkinName, 64);
    io.num<int32_t>(value.skinID);
    io.num<uint32_t>(value.CloneID);
    io.bit<uint32_t>(field<uint32_t, 9>(value.TeamID), field<uint8_t, 1>(value.IgnoreCollision));
}
void ProtoVer::write(Data_out& io, PKT_SpawnMinionS2C const& value) const {
    io.num<uint32_t>(value.fromID);
    io.num<uint32_t>(value.netObjID);
    io.num<uint8_t>(value.netNodeID);
    io.point3d(value.Pos);
    io.fstr(value.Name, 64);
    io.fstr(value.SkinName, 64);
    io.num<int32_t>(value.skinID);
    io.num<uint32_t>(value.CloneID);
    io.bit<uint32_t>(field<uint32_t, 9>(value.TeamID), field<uint8_t, 1>(value.IgnoreCollision));
}
