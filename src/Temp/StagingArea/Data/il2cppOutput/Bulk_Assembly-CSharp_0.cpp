#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// GameManager
struct GameManager_t1536523654;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// ParallaxSystem[]
struct ParallaxSystemU5BU5D_t1497346492;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// SpawningSystem[]
struct SpawningSystemU5BU5D_t2087052287;
// ParallaxSystem
struct ParallaxSystem_t3373904545;
// SpawningSystem
struct SpawningSystem_t3234322778;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
// GameoverPopup
struct GameoverPopup_t2345258755;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.UI.Button
struct Button_t4055032469;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t48803504;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t2581268647;
// System.String
struct String_t;
// GameplayPopup
struct GameplayPopup_t3833071484;
// UnityEngine.Component
struct Component_t1923634451;
// Highscore
struct Highscore_t1172667341;
// Item
struct Item_t2953980098;
// Item/AfterCollectItem
struct AfterCollectItem_t2443332196;
// System.Delegate
struct Delegate_t1188392813;
// UnityEngine.Animator
struct Animator_t434523843;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// Leaderboard/<UploadHighscore>c__Iterator0
struct U3CUploadHighscoreU3Ec__Iterator0_t1095784518;
// Leaderboard/AfterDownloadHighscore
struct AfterDownloadHighscore_t1806836570;
// Leaderboard/<DownloadHighscore>c__Iterator1
struct U3CDownloadHighscoreU3Ec__Iterator1_t1659249822;
// Highscore[]
struct HighscoreU5BU5D_t1440391776;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Char[]
struct CharU5BU5D_t3528271667;
// UnityEngine.WWW
struct WWW_t3688466362;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// LeaderboardDisplay
struct LeaderboardDisplay_t2498610109;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// System.Func`2<Highscore,System.Int32>
struct Func_2_t914422414;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t2317969963;
// System.Linq.IOrderedEnumerable`1<Highscore>
struct IOrderedEnumerable_1_t1828431641;
// System.Collections.Generic.IEnumerable`1<Highscore>
struct IEnumerable_1_t152520230;
// System.Linq.IOrderedEnumerable`1<System.Object>
struct IOrderedEnumerable_1_t3735870464;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// System.Text.StringBuilder
struct StringBuilder_t;
// Menu
struct Menu_t2559899777;
// UnityEngine.UI.InputField
struct InputField_t3762917431;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t648412432;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t2432286830;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t3664942305;
// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_t2729110193;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3961765668;
// UnityEngine.UI.Selectable
struct Selectable_t3250028441;
// Obstacle
struct Obstacle_t162511623;
// ObstacleBlock
struct ObstacleBlock_t2281421392;
// ObstacleFly
struct ObstacleFly_t1336261845;
// UnityEngine.Transform
struct Transform_t3600365921;
// ObstacleSnail
struct ObstacleSnail_t3862460316;
// UnityEngine.Camera
struct Camera_t4157153871;
// System.Collections.Generic.List`1<ParallaxSystem/ParallaxItem>
struct List_1_t337817251;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3235626157;
// UnityEngine.Object
struct Object_t631007953;
// ParallaxSystem/ParallaxItem
struct ParallaxItem_t3160709805;
// System.Func`2<ParallaxSystem/ParallaxItem,System.Single>
struct Func_2_t1357832619;
// System.Func`2<System.Object,System.Single>
struct Func_2_t764290984;
// System.Linq.IOrderedEnumerable`1<ParallaxSystem/ParallaxItem>
struct IOrderedEnumerable_1_t3816474105;
// System.Collections.Generic.IEnumerable`1<ParallaxSystem/ParallaxItem>
struct IEnumerable_1_t2140562694;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// PlayerController
struct PlayerController_t2064355688;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// UnityEngine.Collision2D
struct Collision2D_t2842956331;
// UnityEngine.Collider2D
struct Collider2D_t2806799626;
// UnityEngine.AudioClip
struct AudioClip_t3680889665;
// UIManager
struct UIManager_t1042050227;
// PlayerMovement
struct PlayerMovement_t2731566919;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t939494601;
// Pooling
struct Pooling_t2442357387;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Queue`1<UnityEngine.GameObject>>
struct Dictionary_2_t745152412;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.Queue`1<UnityEngine.GameObject>
struct Queue_1_t959896113;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t2926365658;
// PoolingItem
struct PoolingItem_t2406737350;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;
// SpawningSystem/<OnSpawn>c__Iterator0
struct U3COnSpawnU3Ec__Iterator0_t3539043052;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t2498835369;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t3050769227;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Collections.Generic.Queue`1<UnityEngine.GameObject>[]
struct Queue_1U5BU5D_t400140780;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.Queue`1<UnityEngine.GameObject>,System.Collections.DictionaryEntry>
struct Transform_1_t3545519792;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// ParallaxSystem/ParallaxItem[]
struct ParallaxItemU5BU5D_t3437480960;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t463507806;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// System.Void
struct Void_t1185182177;
// UnityEngine.Sprite
struct Sprite_t280657092;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t96683501;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t1677636661;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t1059417452;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t3064908834;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t3581341831;
// PoolingItem[]
struct PoolingItemU5BU5D_t451468387;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.Transform[]
struct TransformU5BU5D_t807237628;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t427135887;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t2532145056;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t1260619206;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t731888065;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t467195904;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t2355412304;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.Event
struct Event_t2956885303;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.UI.FontData
struct FontData_t746620069;

extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Object_FindObjectsOfType_TisParallaxSystem_t3373904545_m3851594110_RuntimeMethod_var;
extern const RuntimeMethod* Object_FindObjectsOfType_TisSpawningSystem_t3234322778_m1214314677_RuntimeMethod_var;
extern const uint32_t GameManager_Awake_m2466247815_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern const uint32_t GameManager_Update_m1981238775_MetadataUsageId;
extern RuntimeClass* UnityAction_t3245792599_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameoverPopup_U3CInitializeU3Em__0_m438357441_RuntimeMethod_var;
extern const RuntimeMethod* GameoverPopup_U3CInitializeU3Em__1_m3167240796_RuntimeMethod_var;
extern const uint32_t GameoverPopup_Initialize_m3192452224_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2261934641;
extern String_t* _stringLiteral3849149357;
extern const uint32_t GameoverPopup_Show_m2080404054_MetadataUsageId;
extern String_t* _stringLiteral62725266;
extern const uint32_t GameoverPopup_U3CInitializeU3Em__0_m438357441_MetadataUsageId;
extern String_t* _stringLiteral1555075383;
extern const uint32_t GameoverPopup_U3CInitializeU3Em__1_m3167240796_MetadataUsageId;
extern const RuntimeMethod* GameplayPopup_U3CInitializeU3Em__0_m3635574392_RuntimeMethod_var;
extern const RuntimeMethod* GameplayPopup_U3CInitializeU3Em__1_m2069490451_RuntimeMethod_var;
extern const RuntimeMethod* GameplayPopup_OnMenu_m3268732267_RuntimeMethod_var;
extern const uint32_t GameplayPopup_Initialize_m3142122491_MetadataUsageId;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral547424145;
extern const uint32_t GameplayPopup_UpdateGameplayTime_m3883448322_MetadataUsageId;
extern const uint32_t GameplayPopup_OnMenu_m3268732267_MetadataUsageId;
extern RuntimeClass* DateTime_t3738529785_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4006088032;
extern const uint32_t Highscore_get_Text_m4237754476_MetadataUsageId;
extern String_t* _stringLiteral2359133640;
extern String_t* _stringLiteral347475160;
extern const uint32_t Item__ctor_m64206515_MetadataUsageId;
extern RuntimeClass* AfterCollectItem_t2443332196_il2cpp_TypeInfo_var;
extern const uint32_t Item_add__onAfterCollectItem_m1109577406_MetadataUsageId;
extern const uint32_t Item_remove__onAfterCollectItem_m2891778148_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisAnimator_t434523843_m2351447238_RuntimeMethod_var;
extern const uint32_t Item_OnEnable_m3832539774_MetadataUsageId;
extern const uint32_t AfterCollectItem_BeginInvoke_m2205001511_MetadataUsageId;
extern RuntimeClass* U3CUploadHighscoreU3Ec__Iterator0_t1095784518_il2cpp_TypeInfo_var;
extern const uint32_t Leaderboard_UploadHighscore_m3473756086_MetadataUsageId;
extern RuntimeClass* U3CDownloadHighscoreU3Ec__Iterator1_t1659249822_il2cpp_TypeInfo_var;
extern const uint32_t Leaderboard_DownloadHighscore_m2353152059_MetadataUsageId;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* HighscoreU5BU5D_t1440391776_il2cpp_TypeInfo_var;
extern RuntimeClass* Highscore_t1172667341_il2cpp_TypeInfo_var;
extern const uint32_t Leaderboard_FormatHighscore_m560532354_MetadataUsageId;
extern RuntimeClass* WWW_t3688466362_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral392048417;
extern String_t* _stringLiteral2444971981;
extern String_t* _stringLiteral459461992;
extern String_t* _stringLiteral2016357093;
extern String_t* _stringLiteral2133928915;
extern const uint32_t U3CDownloadHighscoreU3Ec__Iterator1_MoveNext_m3174277851_MetadataUsageId;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern const uint32_t U3CDownloadHighscoreU3Ec__Iterator1_Reset_m1270991718_MetadataUsageId;
extern String_t* _stringLiteral2867824504;
extern String_t* _stringLiteral3242380723;
extern String_t* _stringLiteral4178270268;
extern const uint32_t U3CUploadHighscoreU3Ec__Iterator0_MoveNext_m462825594_MetadataUsageId;
extern const uint32_t U3CUploadHighscoreU3Ec__Iterator0_Reset_m2913688499_MetadataUsageId;
extern RuntimeClass* AfterDownloadHighscore_t1806836570_il2cpp_TypeInfo_var;
extern const RuntimeMethod* LeaderboardDisplay_OnHighscoresDownloaded_m346300552_RuntimeMethod_var;
extern String_t* _stringLiteral2314441365;
extern const uint32_t LeaderboardDisplay_Start_m2035372283_MetadataUsageId;
extern RuntimeClass* LeaderboardDisplay_t2498610109_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t914422414_il2cpp_TypeInfo_var;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern const RuntimeMethod* LeaderboardDisplay_U3COnHighscoresDownloadedU3Em__0_m1896792150_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m4218885744_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_OrderByDescending_TisHighscore_t1172667341_TisInt32_t2950945753_m1663012717_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToArray_TisHighscore_t1172667341_m1651663599_RuntimeMethod_var;
extern String_t* _stringLiteral3441831098;
extern const uint32_t LeaderboardDisplay_OnHighscoresDownloaded_m346300552_MetadataUsageId;
extern RuntimeClass* UnityAction_1_t2432286830_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Menu_OnEditInput_m2408215939_RuntimeMethod_var;
extern const RuntimeMethod* UnityAction_1__ctor_m1742195854_RuntimeMethod_var;
extern const RuntimeMethod* UnityEvent_1_AddListener_m2268272923_RuntimeMethod_var;
extern const RuntimeMethod* Menu_OnStartGame_m1558067714_RuntimeMethod_var;
extern const uint32_t Menu_Start_m3708307636_MetadataUsageId;
extern const uint32_t Menu_OnStartGame_m1558067714_MetadataUsageId;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern const uint32_t ObstacleFly_OnEnable_m2089538391_MetadataUsageId;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern const uint32_t ObstacleFly_Update_m2526408389_MetadataUsageId;
extern RuntimeClass* List_1_t337817251_il2cpp_TypeInfo_var;
extern RuntimeClass* ParallaxItem_t3160709805_il2cpp_TypeInfo_var;
extern RuntimeClass* ParallaxSystem_t3373904545_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t1357832619_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m2420326261_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m572897839_RuntimeMethod_var;
extern const RuntimeMethod* ParallaxSystem_U3CStartU3Em__0_m1840493113_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m911400943_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_OrderBy_TisParallaxItem_t3160709805_TisSingle_t1397266774_m2471274649_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToList_TisParallaxItem_t3160709805_m3296214996_RuntimeMethod_var;
extern const uint32_t ParallaxSystem_Start_m1724912213_MetadataUsageId;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Enumerable_FirstOrDefault_TisParallaxItem_t3160709805_m938612081_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_LastOrDefault_TisParallaxItem_t3160709805_m4108382031_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Remove_m3933805465_RuntimeMethod_var;
extern const uint32_t ParallaxSystem_Update_m1416710401_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisAudioSource_t3935305588_m1977431131_RuntimeMethod_var;
extern const uint32_t PlayerController_Start_m1746698410_MetadataUsageId;
extern String_t* _stringLiteral3452654525;
extern const uint32_t PlayerController_OnCollisionEnter2D_m909387068_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisItem_t2953980098_m462103850_RuntimeMethod_var;
extern const RuntimeMethod* PlayerController_OnAfterCollected_m1657761958_RuntimeMethod_var;
extern String_t* _stringLiteral1949155704;
extern const uint32_t PlayerController_OnTriggerEnter2D_m2562319700_MetadataUsageId;
extern String_t* _stringLiteral1873233563;
extern const uint32_t PlayerLog_SetName_m317683739_MetadataUsageId;
extern const uint32_t PlayerLog_GetName_m2322447201_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisRigidbody2D_t939494601_m1531613439_RuntimeMethod_var;
extern const uint32_t PlayerMovement_Start_m3025059540_MetadataUsageId;
extern RuntimeClass* Physics2D_t1528932956_il2cpp_TypeInfo_var;
extern const uint32_t PlayerMovement_FixedUpdate_m2788581829_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t745152412_il2cpp_TypeInfo_var;
extern RuntimeClass* Queue_1_t959896113_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3078442726_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1__ctor_m3618464516_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m3215236302_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Enqueue_m2666802599_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m1312697002_RuntimeMethod_var;
extern const uint32_t Pooling_Awake_m3530310017_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_get_Item_m3259100016_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Dequeue_m526815917_RuntimeMethod_var;
extern const uint32_t Pooling_Dequeue_m2124937373_MetadataUsageId;
extern RuntimeClass* List_1_t128053199_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1628857705_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m697420525_RuntimeMethod_var;
extern const uint32_t SpawningSystem_Start_m2651123252_MetadataUsageId;
extern RuntimeClass* U3COnSpawnU3Ec__Iterator0_t3539043052_il2cpp_TypeInfo_var;
extern const uint32_t SpawningSystem_OnSpawn_m2349354428_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Count_m361000296_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m888956288_RuntimeMethod_var;
extern const uint32_t SpawningSystem_Spawn_m2240802350_MetadataUsageId;
extern const uint32_t U3COnSpawnU3Ec__Iterator0_MoveNext_m3294617592_MetadataUsageId;
extern const uint32_t U3COnSpawnU3Ec__Iterator0_Reset_m2594448335_MetadataUsageId;
struct ContactPoint2D_t3390240644 ;

struct ParallaxSystemU5BU5D_t1497346492;
struct SpawningSystemU5BU5D_t2087052287;
struct HighscoreU5BU5D_t1440391776;
struct StringU5BU5D_t1281789340;
struct CharU5BU5D_t3528271667;
struct ObjectU5BU5D_t2843939325;
struct PoolingItemU5BU5D_t451468387;
struct TransformU5BU5D_t807237628;


#ifndef U3CMODULEU3E_T692745543_H
#define U3CMODULEU3E_T692745543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745543 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745543_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef GAMEPLAYPOPUP_T3833071484_H
#define GAMEPLAYPOPUP_T3833071484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameplayPopup
struct  GameplayPopup_t3833071484  : public RuntimeObject
{
public:
	// UnityEngine.GameObject GameplayPopup::_popup
	GameObject_t1113636619 * ____popup_0;
	// UnityEngine.UI.Text GameplayPopup::_collectedItemsText
	Text_t1901882714 * ____collectedItemsText_1;
	// UnityEngine.UI.Text GameplayPopup::_gameplayTimeText
	Text_t1901882714 * ____gameplayTimeText_2;
	// UnityEngine.UI.Button GameplayPopup::_pauseButton
	Button_t4055032469 * ____pauseButton_3;
	// UnityEngine.UI.Button GameplayPopup::_resumeButton
	Button_t4055032469 * ____resumeButton_4;
	// UnityEngine.UI.Button GameplayPopup::_menuButton
	Button_t4055032469 * ____menuButton_5;
	// UnityEngine.GameObject GameplayPopup::_pausePanel
	GameObject_t1113636619 * ____pausePanel_6;

public:
	inline static int32_t get_offset_of__popup_0() { return static_cast<int32_t>(offsetof(GameplayPopup_t3833071484, ____popup_0)); }
	inline GameObject_t1113636619 * get__popup_0() const { return ____popup_0; }
	inline GameObject_t1113636619 ** get_address_of__popup_0() { return &____popup_0; }
	inline void set__popup_0(GameObject_t1113636619 * value)
	{
		____popup_0 = value;
		Il2CppCodeGenWriteBarrier((&____popup_0), value);
	}

	inline static int32_t get_offset_of__collectedItemsText_1() { return static_cast<int32_t>(offsetof(GameplayPopup_t3833071484, ____collectedItemsText_1)); }
	inline Text_t1901882714 * get__collectedItemsText_1() const { return ____collectedItemsText_1; }
	inline Text_t1901882714 ** get_address_of__collectedItemsText_1() { return &____collectedItemsText_1; }
	inline void set__collectedItemsText_1(Text_t1901882714 * value)
	{
		____collectedItemsText_1 = value;
		Il2CppCodeGenWriteBarrier((&____collectedItemsText_1), value);
	}

	inline static int32_t get_offset_of__gameplayTimeText_2() { return static_cast<int32_t>(offsetof(GameplayPopup_t3833071484, ____gameplayTimeText_2)); }
	inline Text_t1901882714 * get__gameplayTimeText_2() const { return ____gameplayTimeText_2; }
	inline Text_t1901882714 ** get_address_of__gameplayTimeText_2() { return &____gameplayTimeText_2; }
	inline void set__gameplayTimeText_2(Text_t1901882714 * value)
	{
		____gameplayTimeText_2 = value;
		Il2CppCodeGenWriteBarrier((&____gameplayTimeText_2), value);
	}

	inline static int32_t get_offset_of__pauseButton_3() { return static_cast<int32_t>(offsetof(GameplayPopup_t3833071484, ____pauseButton_3)); }
	inline Button_t4055032469 * get__pauseButton_3() const { return ____pauseButton_3; }
	inline Button_t4055032469 ** get_address_of__pauseButton_3() { return &____pauseButton_3; }
	inline void set__pauseButton_3(Button_t4055032469 * value)
	{
		____pauseButton_3 = value;
		Il2CppCodeGenWriteBarrier((&____pauseButton_3), value);
	}

	inline static int32_t get_offset_of__resumeButton_4() { return static_cast<int32_t>(offsetof(GameplayPopup_t3833071484, ____resumeButton_4)); }
	inline Button_t4055032469 * get__resumeButton_4() const { return ____resumeButton_4; }
	inline Button_t4055032469 ** get_address_of__resumeButton_4() { return &____resumeButton_4; }
	inline void set__resumeButton_4(Button_t4055032469 * value)
	{
		____resumeButton_4 = value;
		Il2CppCodeGenWriteBarrier((&____resumeButton_4), value);
	}

	inline static int32_t get_offset_of__menuButton_5() { return static_cast<int32_t>(offsetof(GameplayPopup_t3833071484, ____menuButton_5)); }
	inline Button_t4055032469 * get__menuButton_5() const { return ____menuButton_5; }
	inline Button_t4055032469 ** get_address_of__menuButton_5() { return &____menuButton_5; }
	inline void set__menuButton_5(Button_t4055032469 * value)
	{
		____menuButton_5 = value;
		Il2CppCodeGenWriteBarrier((&____menuButton_5), value);
	}

	inline static int32_t get_offset_of__pausePanel_6() { return static_cast<int32_t>(offsetof(GameplayPopup_t3833071484, ____pausePanel_6)); }
	inline GameObject_t1113636619 * get__pausePanel_6() const { return ____pausePanel_6; }
	inline GameObject_t1113636619 ** get_address_of__pausePanel_6() { return &____pausePanel_6; }
	inline void set__pausePanel_6(GameObject_t1113636619 * value)
	{
		____pausePanel_6 = value;
		Il2CppCodeGenWriteBarrier((&____pausePanel_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEPLAYPOPUP_T3833071484_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef POOLINGITEM_T2406737350_H
#define POOLINGITEM_T2406737350_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PoolingItem
struct  PoolingItem_t2406737350  : public RuntimeObject
{
public:
	// System.String PoolingItem::Tag
	String_t* ___Tag_0;
	// UnityEngine.GameObject PoolingItem::Prefab
	GameObject_t1113636619 * ___Prefab_1;
	// System.Int32 PoolingItem::Size
	int32_t ___Size_2;
	// System.Single PoolingItem::Probability
	float ___Probability_3;

public:
	inline static int32_t get_offset_of_Tag_0() { return static_cast<int32_t>(offsetof(PoolingItem_t2406737350, ___Tag_0)); }
	inline String_t* get_Tag_0() const { return ___Tag_0; }
	inline String_t** get_address_of_Tag_0() { return &___Tag_0; }
	inline void set_Tag_0(String_t* value)
	{
		___Tag_0 = value;
		Il2CppCodeGenWriteBarrier((&___Tag_0), value);
	}

	inline static int32_t get_offset_of_Prefab_1() { return static_cast<int32_t>(offsetof(PoolingItem_t2406737350, ___Prefab_1)); }
	inline GameObject_t1113636619 * get_Prefab_1() const { return ___Prefab_1; }
	inline GameObject_t1113636619 ** get_address_of_Prefab_1() { return &___Prefab_1; }
	inline void set_Prefab_1(GameObject_t1113636619 * value)
	{
		___Prefab_1 = value;
		Il2CppCodeGenWriteBarrier((&___Prefab_1), value);
	}

	inline static int32_t get_offset_of_Size_2() { return static_cast<int32_t>(offsetof(PoolingItem_t2406737350, ___Size_2)); }
	inline int32_t get_Size_2() const { return ___Size_2; }
	inline int32_t* get_address_of_Size_2() { return &___Size_2; }
	inline void set_Size_2(int32_t value)
	{
		___Size_2 = value;
	}

	inline static int32_t get_offset_of_Probability_3() { return static_cast<int32_t>(offsetof(PoolingItem_t2406737350, ___Probability_3)); }
	inline float get_Probability_3() const { return ___Probability_3; }
	inline float* get_address_of_Probability_3() { return &___Probability_3; }
	inline void set_Probability_3(float value)
	{
		___Probability_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POOLINGITEM_T2406737350_H
#ifndef U3CDOWNLOADHIGHSCOREU3EC__ITERATOR1_T1659249822_H
#define U3CDOWNLOADHIGHSCOREU3EC__ITERATOR1_T1659249822_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leaderboard/<DownloadHighscore>c__Iterator1
struct  U3CDownloadHighscoreU3Ec__Iterator1_t1659249822  : public RuntimeObject
{
public:
	// UnityEngine.WWW Leaderboard/<DownloadHighscore>c__Iterator1::<www>__0
	WWW_t3688466362 * ___U3CwwwU3E__0_0;
	// Leaderboard/AfterDownloadHighscore Leaderboard/<DownloadHighscore>c__Iterator1::onAfterDownloadHighscore
	AfterDownloadHighscore_t1806836570 * ___onAfterDownloadHighscore_1;
	// System.Object Leaderboard/<DownloadHighscore>c__Iterator1::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean Leaderboard/<DownloadHighscore>c__Iterator1::$disposing
	bool ___U24disposing_3;
	// System.Int32 Leaderboard/<DownloadHighscore>c__Iterator1::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_U3CwwwU3E__0_0() { return static_cast<int32_t>(offsetof(U3CDownloadHighscoreU3Ec__Iterator1_t1659249822, ___U3CwwwU3E__0_0)); }
	inline WWW_t3688466362 * get_U3CwwwU3E__0_0() const { return ___U3CwwwU3E__0_0; }
	inline WWW_t3688466362 ** get_address_of_U3CwwwU3E__0_0() { return &___U3CwwwU3E__0_0; }
	inline void set_U3CwwwU3E__0_0(WWW_t3688466362 * value)
	{
		___U3CwwwU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwwwU3E__0_0), value);
	}

	inline static int32_t get_offset_of_onAfterDownloadHighscore_1() { return static_cast<int32_t>(offsetof(U3CDownloadHighscoreU3Ec__Iterator1_t1659249822, ___onAfterDownloadHighscore_1)); }
	inline AfterDownloadHighscore_t1806836570 * get_onAfterDownloadHighscore_1() const { return ___onAfterDownloadHighscore_1; }
	inline AfterDownloadHighscore_t1806836570 ** get_address_of_onAfterDownloadHighscore_1() { return &___onAfterDownloadHighscore_1; }
	inline void set_onAfterDownloadHighscore_1(AfterDownloadHighscore_t1806836570 * value)
	{
		___onAfterDownloadHighscore_1 = value;
		Il2CppCodeGenWriteBarrier((&___onAfterDownloadHighscore_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CDownloadHighscoreU3Ec__Iterator1_t1659249822, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CDownloadHighscoreU3Ec__Iterator1_t1659249822, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CDownloadHighscoreU3Ec__Iterator1_t1659249822, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDOWNLOADHIGHSCOREU3EC__ITERATOR1_T1659249822_H
#ifndef UNITYEVENTBASE_T3960448221_H
#define UNITYEVENTBASE_T3960448221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t3960448221  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t2498835369 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t3050769227 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_Calls_0)); }
	inline InvokableCallList_t2498835369 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t2498835369 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t2498835369 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t3050769227 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t3050769227 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t3050769227 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T3960448221_H
#ifndef U3CONSPAWNU3EC__ITERATOR0_T3539043052_H
#define U3CONSPAWNU3EC__ITERATOR0_T3539043052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpawningSystem/<OnSpawn>c__Iterator0
struct  U3COnSpawnU3Ec__Iterator0_t3539043052  : public RuntimeObject
{
public:
	// System.Single SpawningSystem/<OnSpawn>c__Iterator0::<waitTime>__0
	float ___U3CwaitTimeU3E__0_0;
	// System.Single SpawningSystem/<OnSpawn>c__Iterator0::<maxTime>__0
	float ___U3CmaxTimeU3E__0_1;
	// SpawningSystem SpawningSystem/<OnSpawn>c__Iterator0::$this
	SpawningSystem_t3234322778 * ___U24this_2;
	// System.Object SpawningSystem/<OnSpawn>c__Iterator0::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean SpawningSystem/<OnSpawn>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 SpawningSystem/<OnSpawn>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U3CwaitTimeU3E__0_0() { return static_cast<int32_t>(offsetof(U3COnSpawnU3Ec__Iterator0_t3539043052, ___U3CwaitTimeU3E__0_0)); }
	inline float get_U3CwaitTimeU3E__0_0() const { return ___U3CwaitTimeU3E__0_0; }
	inline float* get_address_of_U3CwaitTimeU3E__0_0() { return &___U3CwaitTimeU3E__0_0; }
	inline void set_U3CwaitTimeU3E__0_0(float value)
	{
		___U3CwaitTimeU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CmaxTimeU3E__0_1() { return static_cast<int32_t>(offsetof(U3COnSpawnU3Ec__Iterator0_t3539043052, ___U3CmaxTimeU3E__0_1)); }
	inline float get_U3CmaxTimeU3E__0_1() const { return ___U3CmaxTimeU3E__0_1; }
	inline float* get_address_of_U3CmaxTimeU3E__0_1() { return &___U3CmaxTimeU3E__0_1; }
	inline void set_U3CmaxTimeU3E__0_1(float value)
	{
		___U3CmaxTimeU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3COnSpawnU3Ec__Iterator0_t3539043052, ___U24this_2)); }
	inline SpawningSystem_t3234322778 * get_U24this_2() const { return ___U24this_2; }
	inline SpawningSystem_t3234322778 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(SpawningSystem_t3234322778 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3COnSpawnU3Ec__Iterator0_t3539043052, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3COnSpawnU3Ec__Iterator0_t3539043052, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3COnSpawnU3Ec__Iterator0_t3539043052, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CONSPAWNU3EC__ITERATOR0_T3539043052_H
#ifndef LEADERBOARD_T2917364101_H
#define LEADERBOARD_T2917364101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leaderboard
struct  Leaderboard_t2917364101  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEADERBOARD_T2917364101_H
#ifndef U3CUPLOADHIGHSCOREU3EC__ITERATOR0_T1095784518_H
#define U3CUPLOADHIGHSCOREU3EC__ITERATOR0_T1095784518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leaderboard/<UploadHighscore>c__Iterator0
struct  U3CUploadHighscoreU3Ec__Iterator0_t1095784518  : public RuntimeObject
{
public:
	// System.String Leaderboard/<UploadHighscore>c__Iterator0::username
	String_t* ___username_0;
	// System.Int32 Leaderboard/<UploadHighscore>c__Iterator0::score
	int32_t ___score_1;
	// UnityEngine.WWW Leaderboard/<UploadHighscore>c__Iterator0::<www>__0
	WWW_t3688466362 * ___U3CwwwU3E__0_2;
	// System.Object Leaderboard/<UploadHighscore>c__Iterator0::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean Leaderboard/<UploadHighscore>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 Leaderboard/<UploadHighscore>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_username_0() { return static_cast<int32_t>(offsetof(U3CUploadHighscoreU3Ec__Iterator0_t1095784518, ___username_0)); }
	inline String_t* get_username_0() const { return ___username_0; }
	inline String_t** get_address_of_username_0() { return &___username_0; }
	inline void set_username_0(String_t* value)
	{
		___username_0 = value;
		Il2CppCodeGenWriteBarrier((&___username_0), value);
	}

	inline static int32_t get_offset_of_score_1() { return static_cast<int32_t>(offsetof(U3CUploadHighscoreU3Ec__Iterator0_t1095784518, ___score_1)); }
	inline int32_t get_score_1() const { return ___score_1; }
	inline int32_t* get_address_of_score_1() { return &___score_1; }
	inline void set_score_1(int32_t value)
	{
		___score_1 = value;
	}

	inline static int32_t get_offset_of_U3CwwwU3E__0_2() { return static_cast<int32_t>(offsetof(U3CUploadHighscoreU3Ec__Iterator0_t1095784518, ___U3CwwwU3E__0_2)); }
	inline WWW_t3688466362 * get_U3CwwwU3E__0_2() const { return ___U3CwwwU3E__0_2; }
	inline WWW_t3688466362 ** get_address_of_U3CwwwU3E__0_2() { return &___U3CwwwU3E__0_2; }
	inline void set_U3CwwwU3E__0_2(WWW_t3688466362 * value)
	{
		___U3CwwwU3E__0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwwwU3E__0_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CUploadHighscoreU3Ec__Iterator0_t1095784518, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CUploadHighscoreU3Ec__Iterator0_t1095784518, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CUploadHighscoreU3Ec__Iterator0_t1095784518, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CUPLOADHIGHSCOREU3EC__ITERATOR0_T1095784518_H
#ifndef CUSTOMYIELDINSTRUCTION_T1895667560_H
#define CUSTOMYIELDINSTRUCTION_T1895667560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t1895667560  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMYIELDINSTRUCTION_T1895667560_H
#ifndef LIST_1_T128053199_H
#define LIST_1_T128053199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t128053199  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t385246372* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____items_1)); }
	inline Int32U5BU5D_t385246372* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t385246372** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t385246372* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t128053199_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Int32U5BU5D_t385246372* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t128053199_StaticFields, ___EmptyArray_4)); }
	inline Int32U5BU5D_t385246372* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Int32U5BU5D_t385246372** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Int32U5BU5D_t385246372* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T128053199_H
#ifndef DICTIONARY_2_T745152412_H
#define DICTIONARY_2_T745152412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Queue`1<UnityEngine.GameObject>>
struct  Dictionary_2_t745152412  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	Queue_1U5BU5D_t400140780* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t745152412, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t745152412, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t745152412, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t745152412, ___valueSlots_7)); }
	inline Queue_1U5BU5D_t400140780* get_valueSlots_7() const { return ___valueSlots_7; }
	inline Queue_1U5BU5D_t400140780** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(Queue_1U5BU5D_t400140780* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t745152412, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t745152412, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t745152412, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t745152412, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t745152412, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t745152412, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t745152412, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t745152412_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t3545519792 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t745152412_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t3545519792 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t3545519792 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t3545519792 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T745152412_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef PARALLAXITEM_T3160709805_H
#define PARALLAXITEM_T3160709805_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ParallaxSystem/ParallaxItem
struct  ParallaxItem_t3160709805  : public RuntimeObject
{
public:
	// UnityEngine.Transform ParallaxSystem/ParallaxItem::Transform
	Transform_t3600365921 * ___Transform_0;
	// UnityEngine.SpriteRenderer ParallaxSystem/ParallaxItem::Renderer
	SpriteRenderer_t3235626157 * ___Renderer_1;

public:
	inline static int32_t get_offset_of_Transform_0() { return static_cast<int32_t>(offsetof(ParallaxItem_t3160709805, ___Transform_0)); }
	inline Transform_t3600365921 * get_Transform_0() const { return ___Transform_0; }
	inline Transform_t3600365921 ** get_address_of_Transform_0() { return &___Transform_0; }
	inline void set_Transform_0(Transform_t3600365921 * value)
	{
		___Transform_0 = value;
		Il2CppCodeGenWriteBarrier((&___Transform_0), value);
	}

	inline static int32_t get_offset_of_Renderer_1() { return static_cast<int32_t>(offsetof(ParallaxItem_t3160709805, ___Renderer_1)); }
	inline SpriteRenderer_t3235626157 * get_Renderer_1() const { return ___Renderer_1; }
	inline SpriteRenderer_t3235626157 ** get_address_of_Renderer_1() { return &___Renderer_1; }
	inline void set_Renderer_1(SpriteRenderer_t3235626157 * value)
	{
		___Renderer_1 = value;
		Il2CppCodeGenWriteBarrier((&___Renderer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARALLAXITEM_T3160709805_H
#ifndef LIST_1_T337817251_H
#define LIST_1_T337817251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<ParallaxSystem/ParallaxItem>
struct  List_1_t337817251  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ParallaxItemU5BU5D_t3437480960* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t337817251, ____items_1)); }
	inline ParallaxItemU5BU5D_t3437480960* get__items_1() const { return ____items_1; }
	inline ParallaxItemU5BU5D_t3437480960** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ParallaxItemU5BU5D_t3437480960* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t337817251, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t337817251, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t337817251_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ParallaxItemU5BU5D_t3437480960* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t337817251_StaticFields, ___EmptyArray_4)); }
	inline ParallaxItemU5BU5D_t3437480960* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ParallaxItemU5BU5D_t3437480960** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ParallaxItemU5BU5D_t3437480960* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T337817251_H
#ifndef PLAYERLOG_T1722087948_H
#define PLAYERLOG_T1722087948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerLog
struct  PlayerLog_t1722087948  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERLOG_T1722087948_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef QUEUE_1_T959896113_H
#define QUEUE_1_T959896113_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Queue`1<UnityEngine.GameObject>
struct  Queue_1_t959896113  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	GameObjectU5BU5D_t3328599146* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t959896113, ____array_0)); }
	inline GameObjectU5BU5D_t3328599146* get__array_0() const { return ____array_0; }
	inline GameObjectU5BU5D_t3328599146** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(GameObjectU5BU5D_t3328599146* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t959896113, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t959896113, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t959896113, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t959896113, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUE_1_T959896113_H
#ifndef GAMEOVERPOPUP_T2345258755_H
#define GAMEOVERPOPUP_T2345258755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameoverPopup
struct  GameoverPopup_t2345258755  : public RuntimeObject
{
public:
	// UnityEngine.GameObject GameoverPopup::_popup
	GameObject_t1113636619 * ____popup_0;
	// UnityEngine.UI.Text GameoverPopup::_collectedItemsText
	Text_t1901882714 * ____collectedItemsText_1;
	// UnityEngine.UI.Text GameoverPopup::_gameplayTimeText
	Text_t1901882714 * ____gameplayTimeText_2;
	// UnityEngine.UI.Button GameoverPopup::_replayButton
	Button_t4055032469 * ____replayButton_3;
	// UnityEngine.UI.Button GameoverPopup::_menuButton
	Button_t4055032469 * ____menuButton_4;

public:
	inline static int32_t get_offset_of__popup_0() { return static_cast<int32_t>(offsetof(GameoverPopup_t2345258755, ____popup_0)); }
	inline GameObject_t1113636619 * get__popup_0() const { return ____popup_0; }
	inline GameObject_t1113636619 ** get_address_of__popup_0() { return &____popup_0; }
	inline void set__popup_0(GameObject_t1113636619 * value)
	{
		____popup_0 = value;
		Il2CppCodeGenWriteBarrier((&____popup_0), value);
	}

	inline static int32_t get_offset_of__collectedItemsText_1() { return static_cast<int32_t>(offsetof(GameoverPopup_t2345258755, ____collectedItemsText_1)); }
	inline Text_t1901882714 * get__collectedItemsText_1() const { return ____collectedItemsText_1; }
	inline Text_t1901882714 ** get_address_of__collectedItemsText_1() { return &____collectedItemsText_1; }
	inline void set__collectedItemsText_1(Text_t1901882714 * value)
	{
		____collectedItemsText_1 = value;
		Il2CppCodeGenWriteBarrier((&____collectedItemsText_1), value);
	}

	inline static int32_t get_offset_of__gameplayTimeText_2() { return static_cast<int32_t>(offsetof(GameoverPopup_t2345258755, ____gameplayTimeText_2)); }
	inline Text_t1901882714 * get__gameplayTimeText_2() const { return ____gameplayTimeText_2; }
	inline Text_t1901882714 ** get_address_of__gameplayTimeText_2() { return &____gameplayTimeText_2; }
	inline void set__gameplayTimeText_2(Text_t1901882714 * value)
	{
		____gameplayTimeText_2 = value;
		Il2CppCodeGenWriteBarrier((&____gameplayTimeText_2), value);
	}

	inline static int32_t get_offset_of__replayButton_3() { return static_cast<int32_t>(offsetof(GameoverPopup_t2345258755, ____replayButton_3)); }
	inline Button_t4055032469 * get__replayButton_3() const { return ____replayButton_3; }
	inline Button_t4055032469 ** get_address_of__replayButton_3() { return &____replayButton_3; }
	inline void set__replayButton_3(Button_t4055032469 * value)
	{
		____replayButton_3 = value;
		Il2CppCodeGenWriteBarrier((&____replayButton_3), value);
	}

	inline static int32_t get_offset_of__menuButton_4() { return static_cast<int32_t>(offsetof(GameoverPopup_t2345258755, ____menuButton_4)); }
	inline Button_t4055032469 * get__menuButton_4() const { return ____menuButton_4; }
	inline Button_t4055032469 ** get_address_of__menuButton_4() { return &____menuButton_4; }
	inline void set__menuButton_4(Button_t4055032469 * value)
	{
		____menuButton_4 = value;
		Il2CppCodeGenWriteBarrier((&____menuButton_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOVERPOPUP_T2345258755_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef WWW_T3688466362_H
#define WWW_T3688466362_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WWW
struct  WWW_t3688466362  : public CustomYieldInstruction_t1895667560
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.WWW::_uwr
	UnityWebRequest_t463507806 * ____uwr_0;

public:
	inline static int32_t get_offset_of__uwr_0() { return static_cast<int32_t>(offsetof(WWW_t3688466362, ____uwr_0)); }
	inline UnityWebRequest_t463507806 * get__uwr_0() const { return ____uwr_0; }
	inline UnityWebRequest_t463507806 ** get_address_of__uwr_0() { return &____uwr_0; }
	inline void set__uwr_0(UnityWebRequest_t463507806 * value)
	{
		____uwr_0 = value;
		Il2CppCodeGenWriteBarrier((&____uwr_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WWW_T3688466362_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef UNITYEVENT_1_T2729110193_H
#define UNITYEVENT_1_T2729110193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<System.String>
struct  UnityEvent_1_t2729110193  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t2729110193, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T2729110193_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef LAYERMASK_T3493934918_H
#define LAYERMASK_T3493934918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LayerMask
struct  LayerMask_t3493934918 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t3493934918, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYERMASK_T3493934918_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef SPRITESTATE_T1362986479_H
#define SPRITESTATE_T1362986479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t1362986479 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t280657092 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t280657092 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_HighlightedSprite_0)); }
	inline Sprite_t280657092 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t280657092 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t280657092 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_PressedSprite_1)); }
	inline Sprite_t280657092 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t280657092 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t280657092 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_DisabledSprite_2)); }
	inline Sprite_t280657092 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_t280657092 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_t280657092 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_pinvoke
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_com
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T1362986479_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_8;

public:
	inline static int32_t get_offset_of__ticks_8() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_8)); }
	inline int64_t get__ticks_8() const { return ____ticks_8; }
	inline int64_t* get_address_of__ticks_8() { return &____ticks_8; }
	inline void set__ticks_8(int64_t value)
	{
		____ticks_8 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_5;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_6;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_7;

public:
	inline static int32_t get_offset_of_MaxValue_5() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_5)); }
	inline TimeSpan_t881159249  get_MaxValue_5() const { return ___MaxValue_5; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_5() { return &___MaxValue_5; }
	inline void set_MaxValue_5(TimeSpan_t881159249  value)
	{
		___MaxValue_5 = value;
	}

	inline static int32_t get_offset_of_MinValue_6() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_6)); }
	inline TimeSpan_t881159249  get_MinValue_6() const { return ___MinValue_6; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_6() { return &___MinValue_6; }
	inline void set_MinValue_6(TimeSpan_t881159249  value)
	{
		___MinValue_6 = value;
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_7)); }
	inline TimeSpan_t881159249  get_Zero_7() const { return ___Zero_7; }
	inline TimeSpan_t881159249 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(TimeSpan_t881159249  value)
	{
		___Zero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef UNITYEVENT_T2581268647_H
#define UNITYEVENT_T2581268647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent
struct  UnityEvent_t2581268647  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_t2581268647, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_T2581268647_H
#ifndef BOUNDS_T2266837910_H
#define BOUNDS_T2266837910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_t2266837910 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t3722313464  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t3722313464  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Center_0)); }
	inline Vector3_t3722313464  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t3722313464 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t3722313464  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Extents_1)); }
	inline Vector3_t3722313464  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t3722313464 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t3722313464  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_T2266837910_H
#ifndef CONTENTTYPE_T1787303396_H
#define CONTENTTYPE_T1787303396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/ContentType
struct  ContentType_t1787303396 
{
public:
	// System.Int32 UnityEngine.UI.InputField/ContentType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ContentType_t1787303396, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTENTTYPE_T1787303396_H
#ifndef COLORBLOCK_T2139031574_H
#define COLORBLOCK_T2139031574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t2139031574 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t2555686324  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t2555686324  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t2555686324  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t2555686324  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_NormalColor_0)); }
	inline Color_t2555686324  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t2555686324 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t2555686324  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_HighlightedColor_1)); }
	inline Color_t2555686324  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t2555686324 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t2555686324  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_PressedColor_2)); }
	inline Color_t2555686324  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t2555686324 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t2555686324  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_DisabledColor_3)); }
	inline Color_t2555686324  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t2555686324 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t2555686324  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T2139031574_H
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T3468814247_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef SELECTIONSTATE_T2656606514_H
#define SELECTIONSTATE_T2656606514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/SelectionState
struct  SelectionState_t2656606514 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/SelectionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectionState_t2656606514, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTIONSTATE_T2656606514_H
#ifndef COLLISION2D_T2842956331_H
#define COLLISION2D_T2842956331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collision2D
struct  Collision2D_t2842956331  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_Contacts
	ContactPoint2DU5BU5D_t96683501* ___m_Contacts_4;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t2156229523  ___m_RelativeVelocity_5;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_6;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_Contacts_4() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Contacts_4)); }
	inline ContactPoint2DU5BU5D_t96683501* get_m_Contacts_4() const { return ___m_Contacts_4; }
	inline ContactPoint2DU5BU5D_t96683501** get_address_of_m_Contacts_4() { return &___m_Contacts_4; }
	inline void set_m_Contacts_4(ContactPoint2DU5BU5D_t96683501* value)
	{
		___m_Contacts_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Contacts_4), value);
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_5() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_RelativeVelocity_5)); }
	inline Vector2_t2156229523  get_m_RelativeVelocity_5() const { return ___m_RelativeVelocity_5; }
	inline Vector2_t2156229523 * get_address_of_m_RelativeVelocity_5() { return &___m_RelativeVelocity_5; }
	inline void set_m_RelativeVelocity_5(Vector2_t2156229523  value)
	{
		___m_RelativeVelocity_5 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_6() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Enabled_6)); }
	inline int32_t get_m_Enabled_6() const { return ___m_Enabled_6; }
	inline int32_t* get_address_of_m_Enabled_6() { return &___m_Enabled_6; }
	inline void set_m_Enabled_6(int32_t value)
	{
		___m_Enabled_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t2842956331_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	ContactPoint2D_t3390240644 * ___m_Contacts_4;
	Vector2_t2156229523  ___m_RelativeVelocity_5;
	int32_t ___m_Enabled_6;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t2842956331_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	ContactPoint2D_t3390240644 * ___m_Contacts_4;
	Vector2_t2156229523  ___m_RelativeVelocity_5;
	int32_t ___m_Enabled_6;
};
#endif // COLLISION2D_T2842956331_H
#ifndef INPUTTYPE_T1770400679_H
#define INPUTTYPE_T1770400679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/InputType
struct  InputType_t1770400679 
{
public:
	// System.Int32 UnityEngine.UI.InputField/InputType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InputType_t1770400679, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTTYPE_T1770400679_H
#ifndef TOUCHSCREENKEYBOARDTYPE_T1530597702_H
#define TOUCHSCREENKEYBOARDTYPE_T1530597702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboardType
struct  TouchScreenKeyboardType_t1530597702 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_t1530597702, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHSCREENKEYBOARDTYPE_T1530597702_H
#ifndef LINETYPE_T4214648469_H
#define LINETYPE_T4214648469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/LineType
struct  LineType_t4214648469 
{
public:
	// System.Int32 UnityEngine.UI.InputField/LineType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LineType_t4214648469, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINETYPE_T4214648469_H
#ifndef CHARACTERVALIDATION_T4051914437_H
#define CHARACTERVALIDATION_T4051914437_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/CharacterValidation
struct  CharacterValidation_t4051914437 
{
public:
	// System.Int32 UnityEngine.UI.InputField/CharacterValidation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CharacterValidation_t4051914437, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERVALIDATION_T4051914437_H
#ifndef KEYCODE_T2599294277_H
#define KEYCODE_T2599294277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t2599294277 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyCode_t2599294277, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCODE_T2599294277_H
#ifndef RAYCASTHIT2D_T2279581989_H
#define RAYCASTHIT2D_T2279581989_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit2D
struct  RaycastHit2D_t2279581989 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t2156229523  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t2156229523  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t2156229523  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// UnityEngine.Collider2D UnityEngine.RaycastHit2D::m_Collider
	Collider2D_t2806799626 * ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Centroid_0)); }
	inline Vector2_t2156229523  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_t2156229523 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_t2156229523  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Point_1)); }
	inline Vector2_t2156229523  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_t2156229523 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_t2156229523  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Normal_2)); }
	inline Vector2_t2156229523  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_t2156229523 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_t2156229523  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Collider_5)); }
	inline Collider2D_t2806799626 * get_m_Collider_5() const { return ___m_Collider_5; }
	inline Collider2D_t2806799626 ** get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(Collider2D_t2806799626 * value)
	{
		___m_Collider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RaycastHit2D
struct RaycastHit2D_t2279581989_marshaled_pinvoke
{
	Vector2_t2156229523  ___m_Centroid_0;
	Vector2_t2156229523  ___m_Point_1;
	Vector2_t2156229523  ___m_Normal_2;
	float ___m_Distance_3;
	float ___m_Fraction_4;
	Collider2D_t2806799626 * ___m_Collider_5;
};
// Native definition for COM marshalling of UnityEngine.RaycastHit2D
struct RaycastHit2D_t2279581989_marshaled_com
{
	Vector2_t2156229523  ___m_Centroid_0;
	Vector2_t2156229523  ___m_Point_1;
	Vector2_t2156229523  ___m_Normal_2;
	float ___m_Distance_3;
	float ___m_Fraction_4;
	Collider2D_t2806799626 * ___m_Collider_5;
};
#endif // RAYCASTHIT2D_T2279581989_H
#ifndef TRANSITION_T1769908631_H
#define TRANSITION_T1769908631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/Transition
struct  Transition_t1769908631 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Transition_t1769908631, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSITION_T1769908631_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef MODE_T1066900953_H
#define MODE_T1066900953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation/Mode
struct  Mode_t1066900953 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t1066900953, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODE_T1066900953_H
#ifndef SUBMITEVENT_T648412432_H
#define SUBMITEVENT_T648412432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/SubmitEvent
struct  SubmitEvent_t648412432  : public UnityEvent_1_t2729110193
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBMITEVENT_T648412432_H
#ifndef STRINGSPLITOPTIONS_T641086070_H
#define STRINGSPLITOPTIONS_T641086070_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringSplitOptions
struct  StringSplitOptions_t641086070 
{
public:
	// System.Int32 System.StringSplitOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StringSplitOptions_t641086070, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGSPLITOPTIONS_T641086070_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef BUTTONCLICKEDEVENT_T48803504_H
#define BUTTONCLICKEDEVENT_T48803504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Button/ButtonClickedEvent
struct  ButtonClickedEvent_t48803504  : public UnityEvent_t2581268647
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTONCLICKEDEVENT_T48803504_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t881159249  ___ticks_10;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_11;

public:
	inline static int32_t get_offset_of_ticks_10() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___ticks_10)); }
	inline TimeSpan_t881159249  get_ticks_10() const { return ___ticks_10; }
	inline TimeSpan_t881159249 * get_address_of_ticks_10() { return &___ticks_10; }
	inline void set_ticks_10(TimeSpan_t881159249  value)
	{
		___ticks_10 = value;
	}

	inline static int32_t get_offset_of_kind_11() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___kind_11)); }
	inline int32_t get_kind_11() const { return ___kind_11; }
	inline int32_t* get_address_of_kind_11() { return &___kind_11; }
	inline void set_kind_11(int32_t value)
	{
		___kind_11 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_12;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_13;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1281789340* ___ParseTimeFormats_14;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1281789340* ___ParseYearDayMonthFormats_15;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1281789340* ___ParseYearMonthDayFormats_16;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1281789340* ___ParseDayMonthYearFormats_17;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1281789340* ___ParseMonthDayYearFormats_18;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1281789340* ___MonthDayShortFormats_19;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1281789340* ___DayMonthShortFormats_20;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t385246372* ___daysmonth_21;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t385246372* ___daysmonthleap_22;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_23;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_24;

public:
	inline static int32_t get_offset_of_MaxValue_12() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_12)); }
	inline DateTime_t3738529785  get_MaxValue_12() const { return ___MaxValue_12; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_12() { return &___MaxValue_12; }
	inline void set_MaxValue_12(DateTime_t3738529785  value)
	{
		___MaxValue_12 = value;
	}

	inline static int32_t get_offset_of_MinValue_13() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_13)); }
	inline DateTime_t3738529785  get_MinValue_13() const { return ___MinValue_13; }
	inline DateTime_t3738529785 * get_address_of_MinValue_13() { return &___MinValue_13; }
	inline void set_MinValue_13(DateTime_t3738529785  value)
	{
		___MinValue_13 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_14() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseTimeFormats_14)); }
	inline StringU5BU5D_t1281789340* get_ParseTimeFormats_14() const { return ___ParseTimeFormats_14; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseTimeFormats_14() { return &___ParseTimeFormats_14; }
	inline void set_ParseTimeFormats_14(StringU5BU5D_t1281789340* value)
	{
		___ParseTimeFormats_14 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_14), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_15() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearDayMonthFormats_15)); }
	inline StringU5BU5D_t1281789340* get_ParseYearDayMonthFormats_15() const { return ___ParseYearDayMonthFormats_15; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearDayMonthFormats_15() { return &___ParseYearDayMonthFormats_15; }
	inline void set_ParseYearDayMonthFormats_15(StringU5BU5D_t1281789340* value)
	{
		___ParseYearDayMonthFormats_15 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_15), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_16() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearMonthDayFormats_16)); }
	inline StringU5BU5D_t1281789340* get_ParseYearMonthDayFormats_16() const { return ___ParseYearMonthDayFormats_16; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearMonthDayFormats_16() { return &___ParseYearMonthDayFormats_16; }
	inline void set_ParseYearMonthDayFormats_16(StringU5BU5D_t1281789340* value)
	{
		___ParseYearMonthDayFormats_16 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_16), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_17() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseDayMonthYearFormats_17)); }
	inline StringU5BU5D_t1281789340* get_ParseDayMonthYearFormats_17() const { return ___ParseDayMonthYearFormats_17; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseDayMonthYearFormats_17() { return &___ParseDayMonthYearFormats_17; }
	inline void set_ParseDayMonthYearFormats_17(StringU5BU5D_t1281789340* value)
	{
		___ParseDayMonthYearFormats_17 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_17), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_18() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseMonthDayYearFormats_18)); }
	inline StringU5BU5D_t1281789340* get_ParseMonthDayYearFormats_18() const { return ___ParseMonthDayYearFormats_18; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseMonthDayYearFormats_18() { return &___ParseMonthDayYearFormats_18; }
	inline void set_ParseMonthDayYearFormats_18(StringU5BU5D_t1281789340* value)
	{
		___ParseMonthDayYearFormats_18 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_18), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_19() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MonthDayShortFormats_19)); }
	inline StringU5BU5D_t1281789340* get_MonthDayShortFormats_19() const { return ___MonthDayShortFormats_19; }
	inline StringU5BU5D_t1281789340** get_address_of_MonthDayShortFormats_19() { return &___MonthDayShortFormats_19; }
	inline void set_MonthDayShortFormats_19(StringU5BU5D_t1281789340* value)
	{
		___MonthDayShortFormats_19 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_19), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_20() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DayMonthShortFormats_20)); }
	inline StringU5BU5D_t1281789340* get_DayMonthShortFormats_20() const { return ___DayMonthShortFormats_20; }
	inline StringU5BU5D_t1281789340** get_address_of_DayMonthShortFormats_20() { return &___DayMonthShortFormats_20; }
	inline void set_DayMonthShortFormats_20(StringU5BU5D_t1281789340* value)
	{
		___DayMonthShortFormats_20 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_20), value);
	}

	inline static int32_t get_offset_of_daysmonth_21() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonth_21)); }
	inline Int32U5BU5D_t385246372* get_daysmonth_21() const { return ___daysmonth_21; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonth_21() { return &___daysmonth_21; }
	inline void set_daysmonth_21(Int32U5BU5D_t385246372* value)
	{
		___daysmonth_21 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_21), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_22() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonthleap_22)); }
	inline Int32U5BU5D_t385246372* get_daysmonthleap_22() const { return ___daysmonthleap_22; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonthleap_22() { return &___daysmonthleap_22; }
	inline void set_daysmonthleap_22(Int32U5BU5D_t385246372* value)
	{
		___daysmonthleap_22 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_22), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_23() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___to_local_time_span_object_23)); }
	inline RuntimeObject * get_to_local_time_span_object_23() const { return ___to_local_time_span_object_23; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_23() { return &___to_local_time_span_object_23; }
	inline void set_to_local_time_span_object_23(RuntimeObject * value)
	{
		___to_local_time_span_object_23 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_23), value);
	}

	inline static int32_t get_offset_of_last_now_24() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___last_now_24)); }
	inline int64_t get_last_now_24() const { return ___last_now_24; }
	inline int64_t* get_address_of_last_now_24() { return &___last_now_24; }
	inline void set_last_now_24(int64_t value)
	{
		___last_now_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef AUDIOCLIP_T3680889665_H
#define AUDIOCLIP_T3680889665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_t3680889665  : public Object_t631007953
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t1677636661 * ___m_PCMReaderCallback_2;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t1059417452 * ___m_PCMSetPositionCallback_3;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_2() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMReaderCallback_2)); }
	inline PCMReaderCallback_t1677636661 * get_m_PCMReaderCallback_2() const { return ___m_PCMReaderCallback_2; }
	inline PCMReaderCallback_t1677636661 ** get_address_of_m_PCMReaderCallback_2() { return &___m_PCMReaderCallback_2; }
	inline void set_m_PCMReaderCallback_2(PCMReaderCallback_t1677636661 * value)
	{
		___m_PCMReaderCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_2), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_3() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMSetPositionCallback_3)); }
	inline PCMSetPositionCallback_t1059417452 * get_m_PCMSetPositionCallback_3() const { return ___m_PCMSetPositionCallback_3; }
	inline PCMSetPositionCallback_t1059417452 ** get_address_of_m_PCMSetPositionCallback_3() { return &___m_PCMSetPositionCallback_3; }
	inline void set_m_PCMSetPositionCallback_3(PCMSetPositionCallback_t1059417452 * value)
	{
		___m_PCMSetPositionCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_T3680889665_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef NAVIGATION_T3049316579_H
#define NAVIGATION_T3049316579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t3049316579 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3250028441 * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnUp_1)); }
	inline Selectable_t3250028441 * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t3250028441 * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnDown_2)); }
	inline Selectable_t3250028441 * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t3250028441 * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnLeft_3)); }
	inline Selectable_t3250028441 * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t3250028441 * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnRight_4)); }
	inline Selectable_t3250028441 * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t3250028441 * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T3049316579_H
#ifndef AFTERDOWNLOADHIGHSCORE_T1806836570_H
#define AFTERDOWNLOADHIGHSCORE_T1806836570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leaderboard/AfterDownloadHighscore
struct  AfterDownloadHighscore_t1806836570  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AFTERDOWNLOADHIGHSCORE_T1806836570_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef AFTERCOLLECTITEM_T2443332196_H
#define AFTERCOLLECTITEM_T2443332196_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Item/AfterCollectItem
struct  AfterCollectItem_t2443332196  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AFTERCOLLECTITEM_T2443332196_H
#ifndef HIGHSCORE_T1172667341_H
#define HIGHSCORE_T1172667341_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Highscore
struct  Highscore_t1172667341  : public RuntimeObject
{
public:
	// System.String Highscore::_username
	String_t* ____username_0;
	// System.Int32 Highscore::_score
	int32_t ____score_1;
	// System.DateTime Highscore::_date
	DateTime_t3738529785  ____date_2;

public:
	inline static int32_t get_offset_of__username_0() { return static_cast<int32_t>(offsetof(Highscore_t1172667341, ____username_0)); }
	inline String_t* get__username_0() const { return ____username_0; }
	inline String_t** get_address_of__username_0() { return &____username_0; }
	inline void set__username_0(String_t* value)
	{
		____username_0 = value;
		Il2CppCodeGenWriteBarrier((&____username_0), value);
	}

	inline static int32_t get_offset_of__score_1() { return static_cast<int32_t>(offsetof(Highscore_t1172667341, ____score_1)); }
	inline int32_t get__score_1() const { return ____score_1; }
	inline int32_t* get_address_of__score_1() { return &____score_1; }
	inline void set__score_1(int32_t value)
	{
		____score_1 = value;
	}

	inline static int32_t get_offset_of__date_2() { return static_cast<int32_t>(offsetof(Highscore_t1172667341, ____date_2)); }
	inline DateTime_t3738529785  get__date_2() const { return ____date_2; }
	inline DateTime_t3738529785 * get_address_of__date_2() { return &____date_2; }
	inline void set__date_2(DateTime_t3738529785  value)
	{
		____date_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HIGHSCORE_T1172667341_H
#ifndef UNITYACTION_T3245792599_H
#define UNITYACTION_T3245792599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction
struct  UnityAction_t3245792599  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_T3245792599_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef FUNC_2_T1357832619_H
#define FUNC_2_T1357832619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<ParallaxSystem/ParallaxItem,System.Single>
struct  Func_2_t1357832619  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T1357832619_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef UNITYACTION_1_T2432286830_H
#define UNITYACTION_1_T2432286830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<System.String>
struct  UnityAction_1_t2432286830  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T2432286830_H
#ifndef RIGIDBODY2D_T939494601_H
#define RIGIDBODY2D_T939494601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody2D
struct  Rigidbody2D_t939494601  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY2D_T939494601_H
#ifndef FUNC_2_T914422414_H
#define FUNC_2_T914422414_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<Highscore,System.Int32>
struct  Func_2_t914422414  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T914422414_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t190067161 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t190067161 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t190067161 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t190067161 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t190067161 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t190067161 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef COLLIDER2D_T2806799626_H
#define COLLIDER2D_T2806799626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider2D
struct  Collider2D_t2806799626  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER2D_T2806799626_H
#ifndef ANIMATOR_T434523843_H
#define ANIMATOR_T434523843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animator
struct  Animator_t434523843  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATOR_T434523843_H
#ifndef AUDIOSOURCE_T3935305588_H
#define AUDIOSOURCE_T3935305588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t3935305588  : public Behaviour_t1437897464
{
public:
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::spatializerExtension
	AudioSourceExtension_t3064908834 * ___spatializerExtension_2;
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::ambisonicExtension
	AudioSourceExtension_t3064908834 * ___ambisonicExtension_3;

public:
	inline static int32_t get_offset_of_spatializerExtension_2() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___spatializerExtension_2)); }
	inline AudioSourceExtension_t3064908834 * get_spatializerExtension_2() const { return ___spatializerExtension_2; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_spatializerExtension_2() { return &___spatializerExtension_2; }
	inline void set_spatializerExtension_2(AudioSourceExtension_t3064908834 * value)
	{
		___spatializerExtension_2 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_2), value);
	}

	inline static int32_t get_offset_of_ambisonicExtension_3() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___ambisonicExtension_3)); }
	inline AudioSourceExtension_t3064908834 * get_ambisonicExtension_3() const { return ___ambisonicExtension_3; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_ambisonicExtension_3() { return &___ambisonicExtension_3; }
	inline void set_ambisonicExtension_3(AudioSourceExtension_t3064908834 * value)
	{
		___ambisonicExtension_3 = value;
		Il2CppCodeGenWriteBarrier((&___ambisonicExtension_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T3935305588_H
#ifndef SPRITERENDERER_T3235626157_H
#define SPRITERENDERER_T3235626157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t3235626157  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITERENDERER_T3235626157_H
#ifndef PARALLAXSYSTEM_T3373904545_H
#define PARALLAXSYSTEM_T3373904545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ParallaxSystem
struct  ParallaxSystem_t3373904545  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Camera ParallaxSystem::_mainCamera
	Camera_t4157153871 * ____mainCamera_2;
	// UnityEngine.Transform ParallaxSystem::_transform
	Transform_t3600365921 * ____transform_3;
	// System.Collections.Generic.List`1<ParallaxSystem/ParallaxItem> ParallaxSystem::_items
	List_1_t337817251 * ____items_4;
	// UnityEngine.Vector2 ParallaxSystem::_speed
	Vector2_t2156229523  ____speed_5;
	// UnityEngine.Vector2 ParallaxSystem::_direction
	Vector2_t2156229523  ____direction_6;
	// System.Boolean ParallaxSystem::_isLooping
	bool ____isLooping_7;

public:
	inline static int32_t get_offset_of__mainCamera_2() { return static_cast<int32_t>(offsetof(ParallaxSystem_t3373904545, ____mainCamera_2)); }
	inline Camera_t4157153871 * get__mainCamera_2() const { return ____mainCamera_2; }
	inline Camera_t4157153871 ** get_address_of__mainCamera_2() { return &____mainCamera_2; }
	inline void set__mainCamera_2(Camera_t4157153871 * value)
	{
		____mainCamera_2 = value;
		Il2CppCodeGenWriteBarrier((&____mainCamera_2), value);
	}

	inline static int32_t get_offset_of__transform_3() { return static_cast<int32_t>(offsetof(ParallaxSystem_t3373904545, ____transform_3)); }
	inline Transform_t3600365921 * get__transform_3() const { return ____transform_3; }
	inline Transform_t3600365921 ** get_address_of__transform_3() { return &____transform_3; }
	inline void set__transform_3(Transform_t3600365921 * value)
	{
		____transform_3 = value;
		Il2CppCodeGenWriteBarrier((&____transform_3), value);
	}

	inline static int32_t get_offset_of__items_4() { return static_cast<int32_t>(offsetof(ParallaxSystem_t3373904545, ____items_4)); }
	inline List_1_t337817251 * get__items_4() const { return ____items_4; }
	inline List_1_t337817251 ** get_address_of__items_4() { return &____items_4; }
	inline void set__items_4(List_1_t337817251 * value)
	{
		____items_4 = value;
		Il2CppCodeGenWriteBarrier((&____items_4), value);
	}

	inline static int32_t get_offset_of__speed_5() { return static_cast<int32_t>(offsetof(ParallaxSystem_t3373904545, ____speed_5)); }
	inline Vector2_t2156229523  get__speed_5() const { return ____speed_5; }
	inline Vector2_t2156229523 * get_address_of__speed_5() { return &____speed_5; }
	inline void set__speed_5(Vector2_t2156229523  value)
	{
		____speed_5 = value;
	}

	inline static int32_t get_offset_of__direction_6() { return static_cast<int32_t>(offsetof(ParallaxSystem_t3373904545, ____direction_6)); }
	inline Vector2_t2156229523  get__direction_6() const { return ____direction_6; }
	inline Vector2_t2156229523 * get_address_of__direction_6() { return &____direction_6; }
	inline void set__direction_6(Vector2_t2156229523  value)
	{
		____direction_6 = value;
	}

	inline static int32_t get_offset_of__isLooping_7() { return static_cast<int32_t>(offsetof(ParallaxSystem_t3373904545, ____isLooping_7)); }
	inline bool get__isLooping_7() const { return ____isLooping_7; }
	inline bool* get_address_of__isLooping_7() { return &____isLooping_7; }
	inline void set__isLooping_7(bool value)
	{
		____isLooping_7 = value;
	}
};

struct ParallaxSystem_t3373904545_StaticFields
{
public:
	// System.Func`2<ParallaxSystem/ParallaxItem,System.Single> ParallaxSystem::<>f__am$cache0
	Func_2_t1357832619 * ___U3CU3Ef__amU24cache0_8;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_8() { return static_cast<int32_t>(offsetof(ParallaxSystem_t3373904545_StaticFields, ___U3CU3Ef__amU24cache0_8)); }
	inline Func_2_t1357832619 * get_U3CU3Ef__amU24cache0_8() const { return ___U3CU3Ef__amU24cache0_8; }
	inline Func_2_t1357832619 ** get_address_of_U3CU3Ef__amU24cache0_8() { return &___U3CU3Ef__amU24cache0_8; }
	inline void set_U3CU3Ef__amU24cache0_8(Func_2_t1357832619 * value)
	{
		___U3CU3Ef__amU24cache0_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARALLAXSYSTEM_T3373904545_H
#ifndef UIMANAGER_T1042050227_H
#define UIMANAGER_T1042050227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIManager
struct  UIManager_t1042050227  : public MonoBehaviour_t3962482529
{
public:
	// System.Single UIManager::_gameplayStartTime
	float ____gameplayStartTime_2;
	// System.Boolean UIManager::_isGameover
	bool ____isGameover_3;
	// GameManager UIManager::_gameManager
	GameManager_t1536523654 * ____gameManager_4;
	// UnityEngine.GameObject UIManager::_startMessage
	GameObject_t1113636619 * ____startMessage_5;
	// GameplayPopup UIManager::_gameplayPopup
	GameplayPopup_t3833071484 * ____gameplayPopup_6;
	// GameoverPopup UIManager::_gameoverPopup
	GameoverPopup_t2345258755 * ____gameoverPopup_7;

public:
	inline static int32_t get_offset_of__gameplayStartTime_2() { return static_cast<int32_t>(offsetof(UIManager_t1042050227, ____gameplayStartTime_2)); }
	inline float get__gameplayStartTime_2() const { return ____gameplayStartTime_2; }
	inline float* get_address_of__gameplayStartTime_2() { return &____gameplayStartTime_2; }
	inline void set__gameplayStartTime_2(float value)
	{
		____gameplayStartTime_2 = value;
	}

	inline static int32_t get_offset_of__isGameover_3() { return static_cast<int32_t>(offsetof(UIManager_t1042050227, ____isGameover_3)); }
	inline bool get__isGameover_3() const { return ____isGameover_3; }
	inline bool* get_address_of__isGameover_3() { return &____isGameover_3; }
	inline void set__isGameover_3(bool value)
	{
		____isGameover_3 = value;
	}

	inline static int32_t get_offset_of__gameManager_4() { return static_cast<int32_t>(offsetof(UIManager_t1042050227, ____gameManager_4)); }
	inline GameManager_t1536523654 * get__gameManager_4() const { return ____gameManager_4; }
	inline GameManager_t1536523654 ** get_address_of__gameManager_4() { return &____gameManager_4; }
	inline void set__gameManager_4(GameManager_t1536523654 * value)
	{
		____gameManager_4 = value;
		Il2CppCodeGenWriteBarrier((&____gameManager_4), value);
	}

	inline static int32_t get_offset_of__startMessage_5() { return static_cast<int32_t>(offsetof(UIManager_t1042050227, ____startMessage_5)); }
	inline GameObject_t1113636619 * get__startMessage_5() const { return ____startMessage_5; }
	inline GameObject_t1113636619 ** get_address_of__startMessage_5() { return &____startMessage_5; }
	inline void set__startMessage_5(GameObject_t1113636619 * value)
	{
		____startMessage_5 = value;
		Il2CppCodeGenWriteBarrier((&____startMessage_5), value);
	}

	inline static int32_t get_offset_of__gameplayPopup_6() { return static_cast<int32_t>(offsetof(UIManager_t1042050227, ____gameplayPopup_6)); }
	inline GameplayPopup_t3833071484 * get__gameplayPopup_6() const { return ____gameplayPopup_6; }
	inline GameplayPopup_t3833071484 ** get_address_of__gameplayPopup_6() { return &____gameplayPopup_6; }
	inline void set__gameplayPopup_6(GameplayPopup_t3833071484 * value)
	{
		____gameplayPopup_6 = value;
		Il2CppCodeGenWriteBarrier((&____gameplayPopup_6), value);
	}

	inline static int32_t get_offset_of__gameoverPopup_7() { return static_cast<int32_t>(offsetof(UIManager_t1042050227, ____gameoverPopup_7)); }
	inline GameoverPopup_t2345258755 * get__gameoverPopup_7() const { return ____gameoverPopup_7; }
	inline GameoverPopup_t2345258755 ** get_address_of__gameoverPopup_7() { return &____gameoverPopup_7; }
	inline void set__gameoverPopup_7(GameoverPopup_t2345258755 * value)
	{
		____gameoverPopup_7 = value;
		Il2CppCodeGenWriteBarrier((&____gameoverPopup_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIMANAGER_T1042050227_H
#ifndef PLAYERMOVEMENT_T2731566919_H
#define PLAYERMOVEMENT_T2731566919_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerMovement
struct  PlayerMovement_t2731566919  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform PlayerMovement::_transform
	Transform_t3600365921 * ____transform_2;
	// UnityEngine.Rigidbody2D PlayerMovement::_rigidbody
	Rigidbody2D_t939494601 * ____rigidbody_3;
	// UnityEngine.Transform PlayerMovement::_groundCheck
	Transform_t3600365921 * ____groundCheck_4;
	// UnityEngine.LayerMask PlayerMovement::_groundLayer
	LayerMask_t3493934918  ____groundLayer_5;
	// System.Single PlayerMovement::_jumpForce
	float ____jumpForce_6;

public:
	inline static int32_t get_offset_of__transform_2() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ____transform_2)); }
	inline Transform_t3600365921 * get__transform_2() const { return ____transform_2; }
	inline Transform_t3600365921 ** get_address_of__transform_2() { return &____transform_2; }
	inline void set__transform_2(Transform_t3600365921 * value)
	{
		____transform_2 = value;
		Il2CppCodeGenWriteBarrier((&____transform_2), value);
	}

	inline static int32_t get_offset_of__rigidbody_3() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ____rigidbody_3)); }
	inline Rigidbody2D_t939494601 * get__rigidbody_3() const { return ____rigidbody_3; }
	inline Rigidbody2D_t939494601 ** get_address_of__rigidbody_3() { return &____rigidbody_3; }
	inline void set__rigidbody_3(Rigidbody2D_t939494601 * value)
	{
		____rigidbody_3 = value;
		Il2CppCodeGenWriteBarrier((&____rigidbody_3), value);
	}

	inline static int32_t get_offset_of__groundCheck_4() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ____groundCheck_4)); }
	inline Transform_t3600365921 * get__groundCheck_4() const { return ____groundCheck_4; }
	inline Transform_t3600365921 ** get_address_of__groundCheck_4() { return &____groundCheck_4; }
	inline void set__groundCheck_4(Transform_t3600365921 * value)
	{
		____groundCheck_4 = value;
		Il2CppCodeGenWriteBarrier((&____groundCheck_4), value);
	}

	inline static int32_t get_offset_of__groundLayer_5() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ____groundLayer_5)); }
	inline LayerMask_t3493934918  get__groundLayer_5() const { return ____groundLayer_5; }
	inline LayerMask_t3493934918 * get_address_of__groundLayer_5() { return &____groundLayer_5; }
	inline void set__groundLayer_5(LayerMask_t3493934918  value)
	{
		____groundLayer_5 = value;
	}

	inline static int32_t get_offset_of__jumpForce_6() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ____jumpForce_6)); }
	inline float get__jumpForce_6() const { return ____jumpForce_6; }
	inline float* get_address_of__jumpForce_6() { return &____jumpForce_6; }
	inline void set__jumpForce_6(float value)
	{
		____jumpForce_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERMOVEMENT_T2731566919_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef GAMEMANAGER_T1536523654_H
#define GAMEMANAGER_T1536523654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t1536523654  : public MonoBehaviour_t3962482529
{
public:
	// ParallaxSystem[] GameManager::_parallaxSystems
	ParallaxSystemU5BU5D_t1497346492* ____parallaxSystems_2;
	// SpawningSystem[] GameManager::_spawningSystems
	SpawningSystemU5BU5D_t2087052287* ____spawningSystems_3;
	// System.Boolean GameManager::_isAnyKeyDownPressed
	bool ____isAnyKeyDownPressed_4;
	// PlayerMovement GameManager::_player
	PlayerMovement_t2731566919 * ____player_5;
	// UIManager GameManager::_uiManager
	UIManager_t1042050227 * ____uiManager_6;

public:
	inline static int32_t get_offset_of__parallaxSystems_2() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ____parallaxSystems_2)); }
	inline ParallaxSystemU5BU5D_t1497346492* get__parallaxSystems_2() const { return ____parallaxSystems_2; }
	inline ParallaxSystemU5BU5D_t1497346492** get_address_of__parallaxSystems_2() { return &____parallaxSystems_2; }
	inline void set__parallaxSystems_2(ParallaxSystemU5BU5D_t1497346492* value)
	{
		____parallaxSystems_2 = value;
		Il2CppCodeGenWriteBarrier((&____parallaxSystems_2), value);
	}

	inline static int32_t get_offset_of__spawningSystems_3() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ____spawningSystems_3)); }
	inline SpawningSystemU5BU5D_t2087052287* get__spawningSystems_3() const { return ____spawningSystems_3; }
	inline SpawningSystemU5BU5D_t2087052287** get_address_of__spawningSystems_3() { return &____spawningSystems_3; }
	inline void set__spawningSystems_3(SpawningSystemU5BU5D_t2087052287* value)
	{
		____spawningSystems_3 = value;
		Il2CppCodeGenWriteBarrier((&____spawningSystems_3), value);
	}

	inline static int32_t get_offset_of__isAnyKeyDownPressed_4() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ____isAnyKeyDownPressed_4)); }
	inline bool get__isAnyKeyDownPressed_4() const { return ____isAnyKeyDownPressed_4; }
	inline bool* get_address_of__isAnyKeyDownPressed_4() { return &____isAnyKeyDownPressed_4; }
	inline void set__isAnyKeyDownPressed_4(bool value)
	{
		____isAnyKeyDownPressed_4 = value;
	}

	inline static int32_t get_offset_of__player_5() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ____player_5)); }
	inline PlayerMovement_t2731566919 * get__player_5() const { return ____player_5; }
	inline PlayerMovement_t2731566919 ** get_address_of__player_5() { return &____player_5; }
	inline void set__player_5(PlayerMovement_t2731566919 * value)
	{
		____player_5 = value;
		Il2CppCodeGenWriteBarrier((&____player_5), value);
	}

	inline static int32_t get_offset_of__uiManager_6() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ____uiManager_6)); }
	inline UIManager_t1042050227 * get__uiManager_6() const { return ____uiManager_6; }
	inline UIManager_t1042050227 ** get_address_of__uiManager_6() { return &____uiManager_6; }
	inline void set__uiManager_6(UIManager_t1042050227 * value)
	{
		____uiManager_6 = value;
		Il2CppCodeGenWriteBarrier((&____uiManager_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEMANAGER_T1536523654_H
#ifndef OBSTACLE_T162511623_H
#define OBSTACLE_T162511623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Obstacle
struct  Obstacle_t162511623  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBSTACLE_T162511623_H
#ifndef PLAYERCONTROLLER_T2064355688_H
#define PLAYERCONTROLLER_T2064355688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t2064355688  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.BoxCollider2D PlayerController::_boxCollider
	BoxCollider2D_t3581341831 * ____boxCollider_2;
	// UnityEngine.AudioSource PlayerController::_audioSource
	AudioSource_t3935305588 * ____audioSource_3;
	// System.Int32 PlayerController::_collectedItems
	int32_t ____collectedItems_4;
	// UIManager PlayerController::_uiManager
	UIManager_t1042050227 * ____uiManager_5;
	// UnityEngine.AudioClip PlayerController::_collectItemClip
	AudioClip_t3680889665 * ____collectItemClip_6;
	// UnityEngine.AudioClip PlayerController::_gameoverClip
	AudioClip_t3680889665 * ____gameoverClip_7;

public:
	inline static int32_t get_offset_of__boxCollider_2() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ____boxCollider_2)); }
	inline BoxCollider2D_t3581341831 * get__boxCollider_2() const { return ____boxCollider_2; }
	inline BoxCollider2D_t3581341831 ** get_address_of__boxCollider_2() { return &____boxCollider_2; }
	inline void set__boxCollider_2(BoxCollider2D_t3581341831 * value)
	{
		____boxCollider_2 = value;
		Il2CppCodeGenWriteBarrier((&____boxCollider_2), value);
	}

	inline static int32_t get_offset_of__audioSource_3() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ____audioSource_3)); }
	inline AudioSource_t3935305588 * get__audioSource_3() const { return ____audioSource_3; }
	inline AudioSource_t3935305588 ** get_address_of__audioSource_3() { return &____audioSource_3; }
	inline void set__audioSource_3(AudioSource_t3935305588 * value)
	{
		____audioSource_3 = value;
		Il2CppCodeGenWriteBarrier((&____audioSource_3), value);
	}

	inline static int32_t get_offset_of__collectedItems_4() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ____collectedItems_4)); }
	inline int32_t get__collectedItems_4() const { return ____collectedItems_4; }
	inline int32_t* get_address_of__collectedItems_4() { return &____collectedItems_4; }
	inline void set__collectedItems_4(int32_t value)
	{
		____collectedItems_4 = value;
	}

	inline static int32_t get_offset_of__uiManager_5() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ____uiManager_5)); }
	inline UIManager_t1042050227 * get__uiManager_5() const { return ____uiManager_5; }
	inline UIManager_t1042050227 ** get_address_of__uiManager_5() { return &____uiManager_5; }
	inline void set__uiManager_5(UIManager_t1042050227 * value)
	{
		____uiManager_5 = value;
		Il2CppCodeGenWriteBarrier((&____uiManager_5), value);
	}

	inline static int32_t get_offset_of__collectItemClip_6() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ____collectItemClip_6)); }
	inline AudioClip_t3680889665 * get__collectItemClip_6() const { return ____collectItemClip_6; }
	inline AudioClip_t3680889665 ** get_address_of__collectItemClip_6() { return &____collectItemClip_6; }
	inline void set__collectItemClip_6(AudioClip_t3680889665 * value)
	{
		____collectItemClip_6 = value;
		Il2CppCodeGenWriteBarrier((&____collectItemClip_6), value);
	}

	inline static int32_t get_offset_of__gameoverClip_7() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ____gameoverClip_7)); }
	inline AudioClip_t3680889665 * get__gameoverClip_7() const { return ____gameoverClip_7; }
	inline AudioClip_t3680889665 ** get_address_of__gameoverClip_7() { return &____gameoverClip_7; }
	inline void set__gameoverClip_7(AudioClip_t3680889665 * value)
	{
		____gameoverClip_7 = value;
		Il2CppCodeGenWriteBarrier((&____gameoverClip_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONTROLLER_T2064355688_H
#ifndef ITEM_T2953980098_H
#define ITEM_T2953980098_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Item
struct  Item_t2953980098  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 Item::_hashCollect
	int32_t ____hashCollect_2;
	// System.Int32 Item::_hashNormalize
	int32_t ____hashNormalize_3;
	// UnityEngine.Animator Item::_animator
	Animator_t434523843 * ____animator_4;
	// System.Int32 Item::_value
	int32_t ____value_5;
	// Item/AfterCollectItem Item::_onAfterCollectItem
	AfterCollectItem_t2443332196 * ____onAfterCollectItem_6;

public:
	inline static int32_t get_offset_of__hashCollect_2() { return static_cast<int32_t>(offsetof(Item_t2953980098, ____hashCollect_2)); }
	inline int32_t get__hashCollect_2() const { return ____hashCollect_2; }
	inline int32_t* get_address_of__hashCollect_2() { return &____hashCollect_2; }
	inline void set__hashCollect_2(int32_t value)
	{
		____hashCollect_2 = value;
	}

	inline static int32_t get_offset_of__hashNormalize_3() { return static_cast<int32_t>(offsetof(Item_t2953980098, ____hashNormalize_3)); }
	inline int32_t get__hashNormalize_3() const { return ____hashNormalize_3; }
	inline int32_t* get_address_of__hashNormalize_3() { return &____hashNormalize_3; }
	inline void set__hashNormalize_3(int32_t value)
	{
		____hashNormalize_3 = value;
	}

	inline static int32_t get_offset_of__animator_4() { return static_cast<int32_t>(offsetof(Item_t2953980098, ____animator_4)); }
	inline Animator_t434523843 * get__animator_4() const { return ____animator_4; }
	inline Animator_t434523843 ** get_address_of__animator_4() { return &____animator_4; }
	inline void set__animator_4(Animator_t434523843 * value)
	{
		____animator_4 = value;
		Il2CppCodeGenWriteBarrier((&____animator_4), value);
	}

	inline static int32_t get_offset_of__value_5() { return static_cast<int32_t>(offsetof(Item_t2953980098, ____value_5)); }
	inline int32_t get__value_5() const { return ____value_5; }
	inline int32_t* get_address_of__value_5() { return &____value_5; }
	inline void set__value_5(int32_t value)
	{
		____value_5 = value;
	}

	inline static int32_t get_offset_of__onAfterCollectItem_6() { return static_cast<int32_t>(offsetof(Item_t2953980098, ____onAfterCollectItem_6)); }
	inline AfterCollectItem_t2443332196 * get__onAfterCollectItem_6() const { return ____onAfterCollectItem_6; }
	inline AfterCollectItem_t2443332196 ** get_address_of__onAfterCollectItem_6() { return &____onAfterCollectItem_6; }
	inline void set__onAfterCollectItem_6(AfterCollectItem_t2443332196 * value)
	{
		____onAfterCollectItem_6 = value;
		Il2CppCodeGenWriteBarrier((&____onAfterCollectItem_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ITEM_T2953980098_H
#ifndef MENU_T2559899777_H
#define MENU_T2559899777_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Menu
struct  Menu_t2559899777  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.InputField Menu::_playerNameInputField
	InputField_t3762917431 * ____playerNameInputField_2;
	// UnityEngine.UI.Button Menu::_playButton
	Button_t4055032469 * ____playButton_3;

public:
	inline static int32_t get_offset_of__playerNameInputField_2() { return static_cast<int32_t>(offsetof(Menu_t2559899777, ____playerNameInputField_2)); }
	inline InputField_t3762917431 * get__playerNameInputField_2() const { return ____playerNameInputField_2; }
	inline InputField_t3762917431 ** get_address_of__playerNameInputField_2() { return &____playerNameInputField_2; }
	inline void set__playerNameInputField_2(InputField_t3762917431 * value)
	{
		____playerNameInputField_2 = value;
		Il2CppCodeGenWriteBarrier((&____playerNameInputField_2), value);
	}

	inline static int32_t get_offset_of__playButton_3() { return static_cast<int32_t>(offsetof(Menu_t2559899777, ____playButton_3)); }
	inline Button_t4055032469 * get__playButton_3() const { return ____playButton_3; }
	inline Button_t4055032469 ** get_address_of__playButton_3() { return &____playButton_3; }
	inline void set__playButton_3(Button_t4055032469 * value)
	{
		____playButton_3 = value;
		Il2CppCodeGenWriteBarrier((&____playButton_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MENU_T2559899777_H
#ifndef POOLING_T2442357387_H
#define POOLING_T2442357387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pooling
struct  Pooling_t2442357387  : public MonoBehaviour_t3962482529
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Queue`1<UnityEngine.GameObject>> Pooling::_dictionary
	Dictionary_2_t745152412 * ____dictionary_2;
	// UnityEngine.Transform Pooling::_parent
	Transform_t3600365921 * ____parent_3;
	// PoolingItem[] Pooling::_items
	PoolingItemU5BU5D_t451468387* ____items_4;

public:
	inline static int32_t get_offset_of__dictionary_2() { return static_cast<int32_t>(offsetof(Pooling_t2442357387, ____dictionary_2)); }
	inline Dictionary_2_t745152412 * get__dictionary_2() const { return ____dictionary_2; }
	inline Dictionary_2_t745152412 ** get_address_of__dictionary_2() { return &____dictionary_2; }
	inline void set__dictionary_2(Dictionary_2_t745152412 * value)
	{
		____dictionary_2 = value;
		Il2CppCodeGenWriteBarrier((&____dictionary_2), value);
	}

	inline static int32_t get_offset_of__parent_3() { return static_cast<int32_t>(offsetof(Pooling_t2442357387, ____parent_3)); }
	inline Transform_t3600365921 * get__parent_3() const { return ____parent_3; }
	inline Transform_t3600365921 ** get_address_of__parent_3() { return &____parent_3; }
	inline void set__parent_3(Transform_t3600365921 * value)
	{
		____parent_3 = value;
		Il2CppCodeGenWriteBarrier((&____parent_3), value);
	}

	inline static int32_t get_offset_of__items_4() { return static_cast<int32_t>(offsetof(Pooling_t2442357387, ____items_4)); }
	inline PoolingItemU5BU5D_t451468387* get__items_4() const { return ____items_4; }
	inline PoolingItemU5BU5D_t451468387** get_address_of__items_4() { return &____items_4; }
	inline void set__items_4(PoolingItemU5BU5D_t451468387* value)
	{
		____items_4 = value;
		Il2CppCodeGenWriteBarrier((&____items_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POOLING_T2442357387_H
#ifndef LEADERBOARDDISPLAY_T2498610109_H
#define LEADERBOARDDISPLAY_T2498610109_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeaderboardDisplay
struct  LeaderboardDisplay_t2498610109  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text LeaderboardDisplay::_leaderboardText
	Text_t1901882714 * ____leaderboardText_2;

public:
	inline static int32_t get_offset_of__leaderboardText_2() { return static_cast<int32_t>(offsetof(LeaderboardDisplay_t2498610109, ____leaderboardText_2)); }
	inline Text_t1901882714 * get__leaderboardText_2() const { return ____leaderboardText_2; }
	inline Text_t1901882714 ** get_address_of__leaderboardText_2() { return &____leaderboardText_2; }
	inline void set__leaderboardText_2(Text_t1901882714 * value)
	{
		____leaderboardText_2 = value;
		Il2CppCodeGenWriteBarrier((&____leaderboardText_2), value);
	}
};

struct LeaderboardDisplay_t2498610109_StaticFields
{
public:
	// System.Func`2<Highscore,System.Int32> LeaderboardDisplay::<>f__am$cache0
	Func_2_t914422414 * ___U3CU3Ef__amU24cache0_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_3() { return static_cast<int32_t>(offsetof(LeaderboardDisplay_t2498610109_StaticFields, ___U3CU3Ef__amU24cache0_3)); }
	inline Func_2_t914422414 * get_U3CU3Ef__amU24cache0_3() const { return ___U3CU3Ef__amU24cache0_3; }
	inline Func_2_t914422414 ** get_address_of_U3CU3Ef__amU24cache0_3() { return &___U3CU3Ef__amU24cache0_3; }
	inline void set_U3CU3Ef__amU24cache0_3(Func_2_t914422414 * value)
	{
		___U3CU3Ef__amU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEADERBOARDDISPLAY_T2498610109_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_4;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_5;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_6;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_7;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRender
	CanvasRenderer_t2598313366 * ___m_CanvasRender_8;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_9;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_10;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_14;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_17;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_m_Material_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_4)); }
	inline Material_t340375123 * get_m_Material_4() const { return ___m_Material_4; }
	inline Material_t340375123 ** get_address_of_m_Material_4() { return &___m_Material_4; }
	inline void set_m_Material_4(Material_t340375123 * value)
	{
		___m_Material_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_4), value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_5)); }
	inline Color_t2555686324  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_t2555686324 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_t2555686324  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_6)); }
	inline bool get_m_RaycastTarget_6() const { return ___m_RaycastTarget_6; }
	inline bool* get_address_of_m_RaycastTarget_6() { return &___m_RaycastTarget_6; }
	inline void set_m_RaycastTarget_6(bool value)
	{
		___m_RaycastTarget_6 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_7)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_7() const { return ___m_RectTransform_7; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_7() { return &___m_RectTransform_7; }
	inline void set_m_RectTransform_7(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_7), value);
	}

	inline static int32_t get_offset_of_m_CanvasRender_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRender_8)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRender_8() const { return ___m_CanvasRender_8; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRender_8() { return &___m_CanvasRender_8; }
	inline void set_m_CanvasRender_8(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRender_8), value);
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_9)); }
	inline Canvas_t3310196443 * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_t3310196443 * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_9), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_10)); }
	inline bool get_m_VertsDirty_10() const { return ___m_VertsDirty_10; }
	inline bool* get_address_of_m_VertsDirty_10() { return &___m_VertsDirty_10; }
	inline void set_m_VertsDirty_10(bool value)
	{
		___m_VertsDirty_10 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_11)); }
	inline bool get_m_MaterialDirty_11() const { return ___m_MaterialDirty_11; }
	inline bool* get_address_of_m_MaterialDirty_11() { return &___m_MaterialDirty_11; }
	inline void set_m_MaterialDirty_11(bool value)
	{
		___m_MaterialDirty_11 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_12)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_12() const { return ___m_OnDirtyLayoutCallback_12; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_12() { return &___m_OnDirtyLayoutCallback_12; }
	inline void set_m_OnDirtyLayoutCallback_12(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_12), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_13)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_13() const { return ___m_OnDirtyVertsCallback_13; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_13() { return &___m_OnDirtyVertsCallback_13; }
	inline void set_m_OnDirtyVertsCallback_13(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_13), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_14() const { return ___m_OnDirtyMaterialCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_14() { return &___m_OnDirtyMaterialCallback_14; }
	inline void set_m_OnDirtyMaterialCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_14), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_17)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_17() const { return ___m_ColorTweenRunner_17; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_17() { return &___m_ColorTweenRunner_17; }
	inline void set_m_ColorTweenRunner_17(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_17), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_18(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_18 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_2;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_3;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_15;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_16;

public:
	inline static int32_t get_offset_of_s_DefaultUI_2() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_2)); }
	inline Material_t340375123 * get_s_DefaultUI_2() const { return ___s_DefaultUI_2; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_2() { return &___s_DefaultUI_2; }
	inline void set_s_DefaultUI_2(Material_t340375123 * value)
	{
		___s_DefaultUI_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_2), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_3() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_3)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_3() const { return ___s_WhiteTexture_3; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_3() { return &___s_WhiteTexture_3; }
	inline void set_s_WhiteTexture_3(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_3), value);
	}

	inline static int32_t get_offset_of_s_Mesh_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_15)); }
	inline Mesh_t3648964284 * get_s_Mesh_15() const { return ___s_Mesh_15; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_15() { return &___s_Mesh_15; }
	inline void set_s_Mesh_15(Mesh_t3648964284 * value)
	{
		___s_Mesh_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_15), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_16)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_16() const { return ___s_VertexHelper_16; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_16() { return &___s_VertexHelper_16; }
	inline void set_s_VertexHelper_16(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef SPAWNINGSYSTEM_T3234322778_H
#define SPAWNINGSYSTEM_T3234322778_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpawningSystem
struct  SpawningSystem_t3234322778  : public Pooling_t2442357387
{
public:
	// System.Collections.Generic.List`1<System.Int32> SpawningSystem::_probabilityPool
	List_1_t128053199 * ____probabilityPool_5;
	// UnityEngine.Coroutine SpawningSystem::_onSpawnCoroutine
	Coroutine_t3829159415 * ____onSpawnCoroutine_6;
	// UnityEngine.Transform[] SpawningSystem::_points
	TransformU5BU5D_t807237628* ____points_7;
	// System.Single SpawningSystem::_extraFirstSpawingTime
	float ____extraFirstSpawingTime_8;
	// System.Single SpawningSystem::_minSpawingTime
	float ____minSpawingTime_9;
	// System.Single SpawningSystem::_maxSpawingTime
	float ____maxSpawingTime_10;
	// System.Single SpawningSystem::_decreaseSpawingTime
	float ____decreaseSpawingTime_11;

public:
	inline static int32_t get_offset_of__probabilityPool_5() { return static_cast<int32_t>(offsetof(SpawningSystem_t3234322778, ____probabilityPool_5)); }
	inline List_1_t128053199 * get__probabilityPool_5() const { return ____probabilityPool_5; }
	inline List_1_t128053199 ** get_address_of__probabilityPool_5() { return &____probabilityPool_5; }
	inline void set__probabilityPool_5(List_1_t128053199 * value)
	{
		____probabilityPool_5 = value;
		Il2CppCodeGenWriteBarrier((&____probabilityPool_5), value);
	}

	inline static int32_t get_offset_of__onSpawnCoroutine_6() { return static_cast<int32_t>(offsetof(SpawningSystem_t3234322778, ____onSpawnCoroutine_6)); }
	inline Coroutine_t3829159415 * get__onSpawnCoroutine_6() const { return ____onSpawnCoroutine_6; }
	inline Coroutine_t3829159415 ** get_address_of__onSpawnCoroutine_6() { return &____onSpawnCoroutine_6; }
	inline void set__onSpawnCoroutine_6(Coroutine_t3829159415 * value)
	{
		____onSpawnCoroutine_6 = value;
		Il2CppCodeGenWriteBarrier((&____onSpawnCoroutine_6), value);
	}

	inline static int32_t get_offset_of__points_7() { return static_cast<int32_t>(offsetof(SpawningSystem_t3234322778, ____points_7)); }
	inline TransformU5BU5D_t807237628* get__points_7() const { return ____points_7; }
	inline TransformU5BU5D_t807237628** get_address_of__points_7() { return &____points_7; }
	inline void set__points_7(TransformU5BU5D_t807237628* value)
	{
		____points_7 = value;
		Il2CppCodeGenWriteBarrier((&____points_7), value);
	}

	inline static int32_t get_offset_of__extraFirstSpawingTime_8() { return static_cast<int32_t>(offsetof(SpawningSystem_t3234322778, ____extraFirstSpawingTime_8)); }
	inline float get__extraFirstSpawingTime_8() const { return ____extraFirstSpawingTime_8; }
	inline float* get_address_of__extraFirstSpawingTime_8() { return &____extraFirstSpawingTime_8; }
	inline void set__extraFirstSpawingTime_8(float value)
	{
		____extraFirstSpawingTime_8 = value;
	}

	inline static int32_t get_offset_of__minSpawingTime_9() { return static_cast<int32_t>(offsetof(SpawningSystem_t3234322778, ____minSpawingTime_9)); }
	inline float get__minSpawingTime_9() const { return ____minSpawingTime_9; }
	inline float* get_address_of__minSpawingTime_9() { return &____minSpawingTime_9; }
	inline void set__minSpawingTime_9(float value)
	{
		____minSpawingTime_9 = value;
	}

	inline static int32_t get_offset_of__maxSpawingTime_10() { return static_cast<int32_t>(offsetof(SpawningSystem_t3234322778, ____maxSpawingTime_10)); }
	inline float get__maxSpawingTime_10() const { return ____maxSpawingTime_10; }
	inline float* get_address_of__maxSpawingTime_10() { return &____maxSpawingTime_10; }
	inline void set__maxSpawingTime_10(float value)
	{
		____maxSpawingTime_10 = value;
	}

	inline static int32_t get_offset_of__decreaseSpawingTime_11() { return static_cast<int32_t>(offsetof(SpawningSystem_t3234322778, ____decreaseSpawingTime_11)); }
	inline float get__decreaseSpawingTime_11() const { return ____decreaseSpawingTime_11; }
	inline float* get_address_of__decreaseSpawingTime_11() { return &____decreaseSpawingTime_11; }
	inline void set__decreaseSpawingTime_11(float value)
	{
		____decreaseSpawingTime_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPAWNINGSYSTEM_T3234322778_H
#ifndef OBSTACLESNAIL_T3862460316_H
#define OBSTACLESNAIL_T3862460316_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObstacleSnail
struct  ObstacleSnail_t3862460316  : public Obstacle_t162511623
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBSTACLESNAIL_T3862460316_H
#ifndef OBSTACLEBLOCK_T2281421392_H
#define OBSTACLEBLOCK_T2281421392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObstacleBlock
struct  ObstacleBlock_t2281421392  : public Obstacle_t162511623
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBSTACLEBLOCK_T2281421392_H
#ifndef OBSTACLEFLY_T1336261845_H
#define OBSTACLEFLY_T1336261845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObstacleFly
struct  ObstacleFly_t1336261845  : public Obstacle_t162511623
{
public:
	// UnityEngine.Transform ObstacleFly::_transform
	Transform_t3600365921 * ____transform_2;
	// UnityEngine.Vector2 ObstacleFly::_startPosition
	Vector2_t2156229523  ____startPosition_3;
	// System.Single ObstacleFly::_maxSpeed
	float ____maxSpeed_4;

public:
	inline static int32_t get_offset_of__transform_2() { return static_cast<int32_t>(offsetof(ObstacleFly_t1336261845, ____transform_2)); }
	inline Transform_t3600365921 * get__transform_2() const { return ____transform_2; }
	inline Transform_t3600365921 ** get_address_of__transform_2() { return &____transform_2; }
	inline void set__transform_2(Transform_t3600365921 * value)
	{
		____transform_2 = value;
		Il2CppCodeGenWriteBarrier((&____transform_2), value);
	}

	inline static int32_t get_offset_of__startPosition_3() { return static_cast<int32_t>(offsetof(ObstacleFly_t1336261845, ____startPosition_3)); }
	inline Vector2_t2156229523  get__startPosition_3() const { return ____startPosition_3; }
	inline Vector2_t2156229523 * get_address_of__startPosition_3() { return &____startPosition_3; }
	inline void set__startPosition_3(Vector2_t2156229523  value)
	{
		____startPosition_3 = value;
	}

	inline static int32_t get_offset_of__maxSpeed_4() { return static_cast<int32_t>(offsetof(ObstacleFly_t1336261845, ____maxSpeed_4)); }
	inline float get__maxSpeed_4() const { return ____maxSpeed_4; }
	inline float* get_address_of__maxSpeed_4() { return &____maxSpeed_4; }
	inline void set__maxSpeed_4(float value)
	{
		____maxSpeed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBSTACLEFLY_T1336261845_H
#ifndef SELECTABLE_T3250028441_H
#define SELECTABLE_T3250028441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable
struct  Selectable_t3250028441  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t3049316579  ___m_Navigation_3;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_4;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t2139031574  ___m_Colors_5;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t1362986479  ___m_SpriteState_6;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t2532145056 * ___m_AnimationTriggers_7;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_8;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t1660335611 * ___m_TargetGraphic_9;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_10;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_11;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_12;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_13;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_14;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t1260619206 * ___m_CanvasGroupCache_15;

public:
	inline static int32_t get_offset_of_m_Navigation_3() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Navigation_3)); }
	inline Navigation_t3049316579  get_m_Navigation_3() const { return ___m_Navigation_3; }
	inline Navigation_t3049316579 * get_address_of_m_Navigation_3() { return &___m_Navigation_3; }
	inline void set_m_Navigation_3(Navigation_t3049316579  value)
	{
		___m_Navigation_3 = value;
	}

	inline static int32_t get_offset_of_m_Transition_4() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Transition_4)); }
	inline int32_t get_m_Transition_4() const { return ___m_Transition_4; }
	inline int32_t* get_address_of_m_Transition_4() { return &___m_Transition_4; }
	inline void set_m_Transition_4(int32_t value)
	{
		___m_Transition_4 = value;
	}

	inline static int32_t get_offset_of_m_Colors_5() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Colors_5)); }
	inline ColorBlock_t2139031574  get_m_Colors_5() const { return ___m_Colors_5; }
	inline ColorBlock_t2139031574 * get_address_of_m_Colors_5() { return &___m_Colors_5; }
	inline void set_m_Colors_5(ColorBlock_t2139031574  value)
	{
		___m_Colors_5 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_6() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_SpriteState_6)); }
	inline SpriteState_t1362986479  get_m_SpriteState_6() const { return ___m_SpriteState_6; }
	inline SpriteState_t1362986479 * get_address_of_m_SpriteState_6() { return &___m_SpriteState_6; }
	inline void set_m_SpriteState_6(SpriteState_t1362986479  value)
	{
		___m_SpriteState_6 = value;
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_7() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_AnimationTriggers_7)); }
	inline AnimationTriggers_t2532145056 * get_m_AnimationTriggers_7() const { return ___m_AnimationTriggers_7; }
	inline AnimationTriggers_t2532145056 ** get_address_of_m_AnimationTriggers_7() { return &___m_AnimationTriggers_7; }
	inline void set_m_AnimationTriggers_7(AnimationTriggers_t2532145056 * value)
	{
		___m_AnimationTriggers_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimationTriggers_7), value);
	}

	inline static int32_t get_offset_of_m_Interactable_8() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Interactable_8)); }
	inline bool get_m_Interactable_8() const { return ___m_Interactable_8; }
	inline bool* get_address_of_m_Interactable_8() { return &___m_Interactable_8; }
	inline void set_m_Interactable_8(bool value)
	{
		___m_Interactable_8 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_9() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_TargetGraphic_9)); }
	inline Graphic_t1660335611 * get_m_TargetGraphic_9() const { return ___m_TargetGraphic_9; }
	inline Graphic_t1660335611 ** get_address_of_m_TargetGraphic_9() { return &___m_TargetGraphic_9; }
	inline void set_m_TargetGraphic_9(Graphic_t1660335611 * value)
	{
		___m_TargetGraphic_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetGraphic_9), value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_10() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_GroupsAllowInteraction_10)); }
	inline bool get_m_GroupsAllowInteraction_10() const { return ___m_GroupsAllowInteraction_10; }
	inline bool* get_address_of_m_GroupsAllowInteraction_10() { return &___m_GroupsAllowInteraction_10; }
	inline void set_m_GroupsAllowInteraction_10(bool value)
	{
		___m_GroupsAllowInteraction_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelectionState_11() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CurrentSelectionState_11)); }
	inline int32_t get_m_CurrentSelectionState_11() const { return ___m_CurrentSelectionState_11; }
	inline int32_t* get_address_of_m_CurrentSelectionState_11() { return &___m_CurrentSelectionState_11; }
	inline void set_m_CurrentSelectionState_11(int32_t value)
	{
		___m_CurrentSelectionState_11 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerInsideU3Ek__BackingField_12)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_12() const { return ___U3CisPointerInsideU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_12() { return &___U3CisPointerInsideU3Ek__BackingField_12; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_12(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerDownU3Ek__BackingField_13)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_13() const { return ___U3CisPointerDownU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_13() { return &___U3CisPointerDownU3Ek__BackingField_13; }
	inline void set_U3CisPointerDownU3Ek__BackingField_13(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3ChasSelectionU3Ek__BackingField_14)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_14() const { return ___U3ChasSelectionU3Ek__BackingField_14; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_14() { return &___U3ChasSelectionU3Ek__BackingField_14; }
	inline void set_U3ChasSelectionU3Ek__BackingField_14(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_15() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CanvasGroupCache_15)); }
	inline List_1_t1260619206 * get_m_CanvasGroupCache_15() const { return ___m_CanvasGroupCache_15; }
	inline List_1_t1260619206 ** get_address_of_m_CanvasGroupCache_15() { return &___m_CanvasGroupCache_15; }
	inline void set_m_CanvasGroupCache_15(List_1_t1260619206 * value)
	{
		___m_CanvasGroupCache_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasGroupCache_15), value);
	}
};

struct Selectable_t3250028441_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t427135887 * ___s_List_2;

public:
	inline static int32_t get_offset_of_s_List_2() { return static_cast<int32_t>(offsetof(Selectable_t3250028441_StaticFields, ___s_List_2)); }
	inline List_1_t427135887 * get_s_List_2() const { return ___s_List_2; }
	inline List_1_t427135887 ** get_address_of_s_List_2() { return &___s_List_2; }
	inline void set_s_List_2(List_1_t427135887 * value)
	{
		___s_List_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_List_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTABLE_T3250028441_H
#ifndef BUTTON_T4055032469_H
#define BUTTON_T4055032469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Button
struct  Button_t4055032469  : public Selectable_t3250028441
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t48803504 * ___m_OnClick_16;

public:
	inline static int32_t get_offset_of_m_OnClick_16() { return static_cast<int32_t>(offsetof(Button_t4055032469, ___m_OnClick_16)); }
	inline ButtonClickedEvent_t48803504 * get_m_OnClick_16() const { return ___m_OnClick_16; }
	inline ButtonClickedEvent_t48803504 ** get_address_of_m_OnClick_16() { return &___m_OnClick_16; }
	inline void set_m_OnClick_16(ButtonClickedEvent_t48803504 * value)
	{
		___m_OnClick_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnClick_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTON_T4055032469_H
#ifndef INPUTFIELD_T3762917431_H
#define INPUTFIELD_T3762917431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField
struct  InputField_t3762917431  : public Selectable_t3250028441
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_t731888065 * ___m_Keyboard_16;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_t1901882714 * ___m_TextComponent_18;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_t1660335611 * ___m_Placeholder_19;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_20;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_21;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_22;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_23;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_24;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_25;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_26;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_27;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnEndEdit
	SubmitEvent_t648412432 * ___m_OnEndEdit_28;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_t467195904 * ___m_OnValueChanged_29;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t2355412304 * ___m_OnValidateInput_30;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_t2555686324  ___m_CaretColor_31;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_32;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_t2555686324  ___m_SelectionColor_33;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_34;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_35;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_36;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_37;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_38;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_39;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t3704657025 * ___caretRectTrans_40;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_t1981460040* ___m_CursorVerts_41;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t3211863866 * ___m_InputTextCache_42;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_t2598313366 * ___m_CachedInputRenderer_43;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_44;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t3648964284 * ___m_Mesh_45;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_46;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_47;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_48;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_49;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_52;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t3829159415 * ___m_BlinkCoroutine_53;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_54;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_55;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_56;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t3829159415 * ___m_DragCoroutine_57;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_58;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_59;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_60;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_t2956885303 * ___m_ProcessingEvent_62;

public:
	inline static int32_t get_offset_of_m_Keyboard_16() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_Keyboard_16)); }
	inline TouchScreenKeyboard_t731888065 * get_m_Keyboard_16() const { return ___m_Keyboard_16; }
	inline TouchScreenKeyboard_t731888065 ** get_address_of_m_Keyboard_16() { return &___m_Keyboard_16; }
	inline void set_m_Keyboard_16(TouchScreenKeyboard_t731888065 * value)
	{
		___m_Keyboard_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_Keyboard_16), value);
	}

	inline static int32_t get_offset_of_m_TextComponent_18() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_TextComponent_18)); }
	inline Text_t1901882714 * get_m_TextComponent_18() const { return ___m_TextComponent_18; }
	inline Text_t1901882714 ** get_address_of_m_TextComponent_18() { return &___m_TextComponent_18; }
	inline void set_m_TextComponent_18(Text_t1901882714 * value)
	{
		___m_TextComponent_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextComponent_18), value);
	}

	inline static int32_t get_offset_of_m_Placeholder_19() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_Placeholder_19)); }
	inline Graphic_t1660335611 * get_m_Placeholder_19() const { return ___m_Placeholder_19; }
	inline Graphic_t1660335611 ** get_address_of_m_Placeholder_19() { return &___m_Placeholder_19; }
	inline void set_m_Placeholder_19(Graphic_t1660335611 * value)
	{
		___m_Placeholder_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_Placeholder_19), value);
	}

	inline static int32_t get_offset_of_m_ContentType_20() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_ContentType_20)); }
	inline int32_t get_m_ContentType_20() const { return ___m_ContentType_20; }
	inline int32_t* get_address_of_m_ContentType_20() { return &___m_ContentType_20; }
	inline void set_m_ContentType_20(int32_t value)
	{
		___m_ContentType_20 = value;
	}

	inline static int32_t get_offset_of_m_InputType_21() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_InputType_21)); }
	inline int32_t get_m_InputType_21() const { return ___m_InputType_21; }
	inline int32_t* get_address_of_m_InputType_21() { return &___m_InputType_21; }
	inline void set_m_InputType_21(int32_t value)
	{
		___m_InputType_21 = value;
	}

	inline static int32_t get_offset_of_m_AsteriskChar_22() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_AsteriskChar_22)); }
	inline Il2CppChar get_m_AsteriskChar_22() const { return ___m_AsteriskChar_22; }
	inline Il2CppChar* get_address_of_m_AsteriskChar_22() { return &___m_AsteriskChar_22; }
	inline void set_m_AsteriskChar_22(Il2CppChar value)
	{
		___m_AsteriskChar_22 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardType_23() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_KeyboardType_23)); }
	inline int32_t get_m_KeyboardType_23() const { return ___m_KeyboardType_23; }
	inline int32_t* get_address_of_m_KeyboardType_23() { return &___m_KeyboardType_23; }
	inline void set_m_KeyboardType_23(int32_t value)
	{
		___m_KeyboardType_23 = value;
	}

	inline static int32_t get_offset_of_m_LineType_24() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_LineType_24)); }
	inline int32_t get_m_LineType_24() const { return ___m_LineType_24; }
	inline int32_t* get_address_of_m_LineType_24() { return &___m_LineType_24; }
	inline void set_m_LineType_24(int32_t value)
	{
		___m_LineType_24 = value;
	}

	inline static int32_t get_offset_of_m_HideMobileInput_25() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_HideMobileInput_25)); }
	inline bool get_m_HideMobileInput_25() const { return ___m_HideMobileInput_25; }
	inline bool* get_address_of_m_HideMobileInput_25() { return &___m_HideMobileInput_25; }
	inline void set_m_HideMobileInput_25(bool value)
	{
		___m_HideMobileInput_25 = value;
	}

	inline static int32_t get_offset_of_m_CharacterValidation_26() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CharacterValidation_26)); }
	inline int32_t get_m_CharacterValidation_26() const { return ___m_CharacterValidation_26; }
	inline int32_t* get_address_of_m_CharacterValidation_26() { return &___m_CharacterValidation_26; }
	inline void set_m_CharacterValidation_26(int32_t value)
	{
		___m_CharacterValidation_26 = value;
	}

	inline static int32_t get_offset_of_m_CharacterLimit_27() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CharacterLimit_27)); }
	inline int32_t get_m_CharacterLimit_27() const { return ___m_CharacterLimit_27; }
	inline int32_t* get_address_of_m_CharacterLimit_27() { return &___m_CharacterLimit_27; }
	inline void set_m_CharacterLimit_27(int32_t value)
	{
		___m_CharacterLimit_27 = value;
	}

	inline static int32_t get_offset_of_m_OnEndEdit_28() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_OnEndEdit_28)); }
	inline SubmitEvent_t648412432 * get_m_OnEndEdit_28() const { return ___m_OnEndEdit_28; }
	inline SubmitEvent_t648412432 ** get_address_of_m_OnEndEdit_28() { return &___m_OnEndEdit_28; }
	inline void set_m_OnEndEdit_28(SubmitEvent_t648412432 * value)
	{
		___m_OnEndEdit_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnEndEdit_28), value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_29() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_OnValueChanged_29)); }
	inline OnChangeEvent_t467195904 * get_m_OnValueChanged_29() const { return ___m_OnValueChanged_29; }
	inline OnChangeEvent_t467195904 ** get_address_of_m_OnValueChanged_29() { return &___m_OnValueChanged_29; }
	inline void set_m_OnValueChanged_29(OnChangeEvent_t467195904 * value)
	{
		___m_OnValueChanged_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValueChanged_29), value);
	}

	inline static int32_t get_offset_of_m_OnValidateInput_30() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_OnValidateInput_30)); }
	inline OnValidateInput_t2355412304 * get_m_OnValidateInput_30() const { return ___m_OnValidateInput_30; }
	inline OnValidateInput_t2355412304 ** get_address_of_m_OnValidateInput_30() { return &___m_OnValidateInput_30; }
	inline void set_m_OnValidateInput_30(OnValidateInput_t2355412304 * value)
	{
		___m_OnValidateInput_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValidateInput_30), value);
	}

	inline static int32_t get_offset_of_m_CaretColor_31() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretColor_31)); }
	inline Color_t2555686324  get_m_CaretColor_31() const { return ___m_CaretColor_31; }
	inline Color_t2555686324 * get_address_of_m_CaretColor_31() { return &___m_CaretColor_31; }
	inline void set_m_CaretColor_31(Color_t2555686324  value)
	{
		___m_CaretColor_31 = value;
	}

	inline static int32_t get_offset_of_m_CustomCaretColor_32() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CustomCaretColor_32)); }
	inline bool get_m_CustomCaretColor_32() const { return ___m_CustomCaretColor_32; }
	inline bool* get_address_of_m_CustomCaretColor_32() { return &___m_CustomCaretColor_32; }
	inline void set_m_CustomCaretColor_32(bool value)
	{
		___m_CustomCaretColor_32 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_33() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_SelectionColor_33)); }
	inline Color_t2555686324  get_m_SelectionColor_33() const { return ___m_SelectionColor_33; }
	inline Color_t2555686324 * get_address_of_m_SelectionColor_33() { return &___m_SelectionColor_33; }
	inline void set_m_SelectionColor_33(Color_t2555686324  value)
	{
		___m_SelectionColor_33 = value;
	}

	inline static int32_t get_offset_of_m_Text_34() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_Text_34)); }
	inline String_t* get_m_Text_34() const { return ___m_Text_34; }
	inline String_t** get_address_of_m_Text_34() { return &___m_Text_34; }
	inline void set_m_Text_34(String_t* value)
	{
		___m_Text_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_34), value);
	}

	inline static int32_t get_offset_of_m_CaretBlinkRate_35() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretBlinkRate_35)); }
	inline float get_m_CaretBlinkRate_35() const { return ___m_CaretBlinkRate_35; }
	inline float* get_address_of_m_CaretBlinkRate_35() { return &___m_CaretBlinkRate_35; }
	inline void set_m_CaretBlinkRate_35(float value)
	{
		___m_CaretBlinkRate_35 = value;
	}

	inline static int32_t get_offset_of_m_CaretWidth_36() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretWidth_36)); }
	inline int32_t get_m_CaretWidth_36() const { return ___m_CaretWidth_36; }
	inline int32_t* get_address_of_m_CaretWidth_36() { return &___m_CaretWidth_36; }
	inline void set_m_CaretWidth_36(int32_t value)
	{
		___m_CaretWidth_36 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_37() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_ReadOnly_37)); }
	inline bool get_m_ReadOnly_37() const { return ___m_ReadOnly_37; }
	inline bool* get_address_of_m_ReadOnly_37() { return &___m_ReadOnly_37; }
	inline void set_m_ReadOnly_37(bool value)
	{
		___m_ReadOnly_37 = value;
	}

	inline static int32_t get_offset_of_m_CaretPosition_38() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretPosition_38)); }
	inline int32_t get_m_CaretPosition_38() const { return ___m_CaretPosition_38; }
	inline int32_t* get_address_of_m_CaretPosition_38() { return &___m_CaretPosition_38; }
	inline void set_m_CaretPosition_38(int32_t value)
	{
		___m_CaretPosition_38 = value;
	}

	inline static int32_t get_offset_of_m_CaretSelectPosition_39() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretSelectPosition_39)); }
	inline int32_t get_m_CaretSelectPosition_39() const { return ___m_CaretSelectPosition_39; }
	inline int32_t* get_address_of_m_CaretSelectPosition_39() { return &___m_CaretSelectPosition_39; }
	inline void set_m_CaretSelectPosition_39(int32_t value)
	{
		___m_CaretSelectPosition_39 = value;
	}

	inline static int32_t get_offset_of_caretRectTrans_40() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___caretRectTrans_40)); }
	inline RectTransform_t3704657025 * get_caretRectTrans_40() const { return ___caretRectTrans_40; }
	inline RectTransform_t3704657025 ** get_address_of_caretRectTrans_40() { return &___caretRectTrans_40; }
	inline void set_caretRectTrans_40(RectTransform_t3704657025 * value)
	{
		___caretRectTrans_40 = value;
		Il2CppCodeGenWriteBarrier((&___caretRectTrans_40), value);
	}

	inline static int32_t get_offset_of_m_CursorVerts_41() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CursorVerts_41)); }
	inline UIVertexU5BU5D_t1981460040* get_m_CursorVerts_41() const { return ___m_CursorVerts_41; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_CursorVerts_41() { return &___m_CursorVerts_41; }
	inline void set_m_CursorVerts_41(UIVertexU5BU5D_t1981460040* value)
	{
		___m_CursorVerts_41 = value;
		Il2CppCodeGenWriteBarrier((&___m_CursorVerts_41), value);
	}

	inline static int32_t get_offset_of_m_InputTextCache_42() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_InputTextCache_42)); }
	inline TextGenerator_t3211863866 * get_m_InputTextCache_42() const { return ___m_InputTextCache_42; }
	inline TextGenerator_t3211863866 ** get_address_of_m_InputTextCache_42() { return &___m_InputTextCache_42; }
	inline void set_m_InputTextCache_42(TextGenerator_t3211863866 * value)
	{
		___m_InputTextCache_42 = value;
		Il2CppCodeGenWriteBarrier((&___m_InputTextCache_42), value);
	}

	inline static int32_t get_offset_of_m_CachedInputRenderer_43() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CachedInputRenderer_43)); }
	inline CanvasRenderer_t2598313366 * get_m_CachedInputRenderer_43() const { return ___m_CachedInputRenderer_43; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CachedInputRenderer_43() { return &___m_CachedInputRenderer_43; }
	inline void set_m_CachedInputRenderer_43(CanvasRenderer_t2598313366 * value)
	{
		___m_CachedInputRenderer_43 = value;
		Il2CppCodeGenWriteBarrier((&___m_CachedInputRenderer_43), value);
	}

	inline static int32_t get_offset_of_m_PreventFontCallback_44() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_PreventFontCallback_44)); }
	inline bool get_m_PreventFontCallback_44() const { return ___m_PreventFontCallback_44; }
	inline bool* get_address_of_m_PreventFontCallback_44() { return &___m_PreventFontCallback_44; }
	inline void set_m_PreventFontCallback_44(bool value)
	{
		___m_PreventFontCallback_44 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_45() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_Mesh_45)); }
	inline Mesh_t3648964284 * get_m_Mesh_45() const { return ___m_Mesh_45; }
	inline Mesh_t3648964284 ** get_address_of_m_Mesh_45() { return &___m_Mesh_45; }
	inline void set_m_Mesh_45(Mesh_t3648964284 * value)
	{
		___m_Mesh_45 = value;
		Il2CppCodeGenWriteBarrier((&___m_Mesh_45), value);
	}

	inline static int32_t get_offset_of_m_AllowInput_46() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_AllowInput_46)); }
	inline bool get_m_AllowInput_46() const { return ___m_AllowInput_46; }
	inline bool* get_address_of_m_AllowInput_46() { return &___m_AllowInput_46; }
	inline void set_m_AllowInput_46(bool value)
	{
		___m_AllowInput_46 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateNextUpdate_47() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_ShouldActivateNextUpdate_47)); }
	inline bool get_m_ShouldActivateNextUpdate_47() const { return ___m_ShouldActivateNextUpdate_47; }
	inline bool* get_address_of_m_ShouldActivateNextUpdate_47() { return &___m_ShouldActivateNextUpdate_47; }
	inline void set_m_ShouldActivateNextUpdate_47(bool value)
	{
		___m_ShouldActivateNextUpdate_47 = value;
	}

	inline static int32_t get_offset_of_m_UpdateDrag_48() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_UpdateDrag_48)); }
	inline bool get_m_UpdateDrag_48() const { return ___m_UpdateDrag_48; }
	inline bool* get_address_of_m_UpdateDrag_48() { return &___m_UpdateDrag_48; }
	inline void set_m_UpdateDrag_48(bool value)
	{
		___m_UpdateDrag_48 = value;
	}

	inline static int32_t get_offset_of_m_DragPositionOutOfBounds_49() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_DragPositionOutOfBounds_49)); }
	inline bool get_m_DragPositionOutOfBounds_49() const { return ___m_DragPositionOutOfBounds_49; }
	inline bool* get_address_of_m_DragPositionOutOfBounds_49() { return &___m_DragPositionOutOfBounds_49; }
	inline void set_m_DragPositionOutOfBounds_49(bool value)
	{
		___m_DragPositionOutOfBounds_49 = value;
	}

	inline static int32_t get_offset_of_m_CaretVisible_52() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretVisible_52)); }
	inline bool get_m_CaretVisible_52() const { return ___m_CaretVisible_52; }
	inline bool* get_address_of_m_CaretVisible_52() { return &___m_CaretVisible_52; }
	inline void set_m_CaretVisible_52(bool value)
	{
		___m_CaretVisible_52 = value;
	}

	inline static int32_t get_offset_of_m_BlinkCoroutine_53() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_BlinkCoroutine_53)); }
	inline Coroutine_t3829159415 * get_m_BlinkCoroutine_53() const { return ___m_BlinkCoroutine_53; }
	inline Coroutine_t3829159415 ** get_address_of_m_BlinkCoroutine_53() { return &___m_BlinkCoroutine_53; }
	inline void set_m_BlinkCoroutine_53(Coroutine_t3829159415 * value)
	{
		___m_BlinkCoroutine_53 = value;
		Il2CppCodeGenWriteBarrier((&___m_BlinkCoroutine_53), value);
	}

	inline static int32_t get_offset_of_m_BlinkStartTime_54() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_BlinkStartTime_54)); }
	inline float get_m_BlinkStartTime_54() const { return ___m_BlinkStartTime_54; }
	inline float* get_address_of_m_BlinkStartTime_54() { return &___m_BlinkStartTime_54; }
	inline void set_m_BlinkStartTime_54(float value)
	{
		___m_BlinkStartTime_54 = value;
	}

	inline static int32_t get_offset_of_m_DrawStart_55() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_DrawStart_55)); }
	inline int32_t get_m_DrawStart_55() const { return ___m_DrawStart_55; }
	inline int32_t* get_address_of_m_DrawStart_55() { return &___m_DrawStart_55; }
	inline void set_m_DrawStart_55(int32_t value)
	{
		___m_DrawStart_55 = value;
	}

	inline static int32_t get_offset_of_m_DrawEnd_56() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_DrawEnd_56)); }
	inline int32_t get_m_DrawEnd_56() const { return ___m_DrawEnd_56; }
	inline int32_t* get_address_of_m_DrawEnd_56() { return &___m_DrawEnd_56; }
	inline void set_m_DrawEnd_56(int32_t value)
	{
		___m_DrawEnd_56 = value;
	}

	inline static int32_t get_offset_of_m_DragCoroutine_57() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_DragCoroutine_57)); }
	inline Coroutine_t3829159415 * get_m_DragCoroutine_57() const { return ___m_DragCoroutine_57; }
	inline Coroutine_t3829159415 ** get_address_of_m_DragCoroutine_57() { return &___m_DragCoroutine_57; }
	inline void set_m_DragCoroutine_57(Coroutine_t3829159415 * value)
	{
		___m_DragCoroutine_57 = value;
		Il2CppCodeGenWriteBarrier((&___m_DragCoroutine_57), value);
	}

	inline static int32_t get_offset_of_m_OriginalText_58() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_OriginalText_58)); }
	inline String_t* get_m_OriginalText_58() const { return ___m_OriginalText_58; }
	inline String_t** get_address_of_m_OriginalText_58() { return &___m_OriginalText_58; }
	inline void set_m_OriginalText_58(String_t* value)
	{
		___m_OriginalText_58 = value;
		Il2CppCodeGenWriteBarrier((&___m_OriginalText_58), value);
	}

	inline static int32_t get_offset_of_m_WasCanceled_59() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_WasCanceled_59)); }
	inline bool get_m_WasCanceled_59() const { return ___m_WasCanceled_59; }
	inline bool* get_address_of_m_WasCanceled_59() { return &___m_WasCanceled_59; }
	inline void set_m_WasCanceled_59(bool value)
	{
		___m_WasCanceled_59 = value;
	}

	inline static int32_t get_offset_of_m_HasDoneFocusTransition_60() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_HasDoneFocusTransition_60)); }
	inline bool get_m_HasDoneFocusTransition_60() const { return ___m_HasDoneFocusTransition_60; }
	inline bool* get_address_of_m_HasDoneFocusTransition_60() { return &___m_HasDoneFocusTransition_60; }
	inline void set_m_HasDoneFocusTransition_60(bool value)
	{
		___m_HasDoneFocusTransition_60 = value;
	}

	inline static int32_t get_offset_of_m_ProcessingEvent_62() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_ProcessingEvent_62)); }
	inline Event_t2956885303 * get_m_ProcessingEvent_62() const { return ___m_ProcessingEvent_62; }
	inline Event_t2956885303 ** get_address_of_m_ProcessingEvent_62() { return &___m_ProcessingEvent_62; }
	inline void set_m_ProcessingEvent_62(Event_t2956885303 * value)
	{
		___m_ProcessingEvent_62 = value;
		Il2CppCodeGenWriteBarrier((&___m_ProcessingEvent_62), value);
	}
};

struct InputField_t3762917431_StaticFields
{
public:
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t3528271667* ___kSeparators_17;

public:
	inline static int32_t get_offset_of_kSeparators_17() { return static_cast<int32_t>(offsetof(InputField_t3762917431_StaticFields, ___kSeparators_17)); }
	inline CharU5BU5D_t3528271667* get_kSeparators_17() const { return ___kSeparators_17; }
	inline CharU5BU5D_t3528271667** get_address_of_kSeparators_17() { return &___kSeparators_17; }
	inline void set_kSeparators_17(CharU5BU5D_t3528271667* value)
	{
		___kSeparators_17 = value;
		Il2CppCodeGenWriteBarrier((&___kSeparators_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTFIELD_T3762917431_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_19;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_20;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_21;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_22;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_23;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_25;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_26;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_27;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_19() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_19)); }
	inline bool get_m_ShouldRecalculateStencil_19() const { return ___m_ShouldRecalculateStencil_19; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_19() { return &___m_ShouldRecalculateStencil_19; }
	inline void set_m_ShouldRecalculateStencil_19(bool value)
	{
		___m_ShouldRecalculateStencil_19 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_20() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_20)); }
	inline Material_t340375123 * get_m_MaskMaterial_20() const { return ___m_MaskMaterial_20; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_20() { return &___m_MaskMaterial_20; }
	inline void set_m_MaskMaterial_20(Material_t340375123 * value)
	{
		___m_MaskMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_20), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_21)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_21() const { return ___m_ParentMask_21; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_21() { return &___m_ParentMask_21; }
	inline void set_m_ParentMask_21(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_21), value);
	}

	inline static int32_t get_offset_of_m_Maskable_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_22)); }
	inline bool get_m_Maskable_22() const { return ___m_Maskable_22; }
	inline bool* get_address_of_m_Maskable_22() { return &___m_Maskable_22; }
	inline void set_m_Maskable_22(bool value)
	{
		___m_Maskable_22 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_23)); }
	inline bool get_m_IncludeForMasking_23() const { return ___m_IncludeForMasking_23; }
	inline bool* get_address_of_m_IncludeForMasking_23() { return &___m_IncludeForMasking_23; }
	inline void set_m_IncludeForMasking_23(bool value)
	{
		___m_IncludeForMasking_23 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_24)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_24() const { return ___m_OnCullStateChanged_24; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_24() { return &___m_OnCullStateChanged_24; }
	inline void set_m_OnCullStateChanged_24(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_24), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_25)); }
	inline bool get_m_ShouldRecalculate_25() const { return ___m_ShouldRecalculate_25; }
	inline bool* get_address_of_m_ShouldRecalculate_25() { return &___m_ShouldRecalculate_25; }
	inline void set_m_ShouldRecalculate_25(bool value)
	{
		___m_ShouldRecalculate_25 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_26)); }
	inline int32_t get_m_StencilValue_26() const { return ___m_StencilValue_26; }
	inline int32_t* get_address_of_m_StencilValue_26() { return &___m_StencilValue_26; }
	inline void set_m_StencilValue_26(int32_t value)
	{
		___m_StencilValue_26 = value;
	}

	inline static int32_t get_offset_of_m_Corners_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_27)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_27() const { return ___m_Corners_27; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_27() { return &___m_Corners_27; }
	inline void set_m_Corners_27(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_28;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_29;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_30;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_31;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_33;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_34;

public:
	inline static int32_t get_offset_of_m_FontData_28() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_28)); }
	inline FontData_t746620069 * get_m_FontData_28() const { return ___m_FontData_28; }
	inline FontData_t746620069 ** get_address_of_m_FontData_28() { return &___m_FontData_28; }
	inline void set_m_FontData_28(FontData_t746620069 * value)
	{
		___m_FontData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_28), value);
	}

	inline static int32_t get_offset_of_m_Text_29() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_29)); }
	inline String_t* get_m_Text_29() const { return ___m_Text_29; }
	inline String_t** get_address_of_m_Text_29() { return &___m_Text_29; }
	inline void set_m_Text_29(String_t* value)
	{
		___m_Text_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_29), value);
	}

	inline static int32_t get_offset_of_m_TextCache_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_30)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_30() const { return ___m_TextCache_30; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_30() { return &___m_TextCache_30; }
	inline void set_m_TextCache_30(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_30), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_31)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_31() const { return ___m_TextCacheForLayout_31; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_31() { return &___m_TextCacheForLayout_31; }
	inline void set_m_TextCacheForLayout_31(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_31), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_33)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_33() const { return ___m_DisableFontTextureRebuiltCallback_33; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_33() { return &___m_DisableFontTextureRebuiltCallback_33; }
	inline void set_m_DisableFontTextureRebuiltCallback_33(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_33 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_34() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_34)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_34() const { return ___m_TempVerts_34; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_34() { return &___m_TempVerts_34; }
	inline void set_m_TempVerts_34(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_34), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_32;

public:
	inline static int32_t get_offset_of_s_DefaultText_32() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_32)); }
	inline Material_t340375123 * get_s_DefaultText_32() const { return ___s_DefaultText_32; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_32() { return &___s_DefaultText_32; }
	inline void set_s_DefaultText_32(Material_t340375123 * value)
	{
		___s_DefaultText_32 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
// ParallaxSystem[]
struct ParallaxSystemU5BU5D_t1497346492  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParallaxSystem_t3373904545 * m_Items[1];

public:
	inline ParallaxSystem_t3373904545 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParallaxSystem_t3373904545 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParallaxSystem_t3373904545 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ParallaxSystem_t3373904545 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParallaxSystem_t3373904545 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParallaxSystem_t3373904545 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// SpawningSystem[]
struct SpawningSystemU5BU5D_t2087052287  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SpawningSystem_t3234322778 * m_Items[1];

public:
	inline SpawningSystem_t3234322778 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpawningSystem_t3234322778 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpawningSystem_t3234322778 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline SpawningSystem_t3234322778 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpawningSystem_t3234322778 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpawningSystem_t3234322778 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Highscore[]
struct HighscoreU5BU5D_t1440391776  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Highscore_t1172667341 * m_Items[1];

public:
	inline Highscore_t1172667341 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Highscore_t1172667341 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Highscore_t1172667341 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Highscore_t1172667341 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Highscore_t1172667341 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Highscore_t1172667341 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// PoolingItem[]
struct PoolingItemU5BU5D_t451468387  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PoolingItem_t2406737350 * m_Items[1];

public:
	inline PoolingItem_t2406737350 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PoolingItem_t2406737350 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PoolingItem_t2406737350 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline PoolingItem_t2406737350 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PoolingItem_t2406737350 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PoolingItem_t2406737350 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_t807237628  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_t3600365921 * m_Items[1];

public:
	inline Transform_t3600365921 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_t3600365921 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_t3600365921 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Transform_t3600365921 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_t3600365921 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_t3600365921 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
extern "C"  ObjectU5BU5D_t2843939325* Object_FindObjectsOfType_TisRuntimeObject_m2776316817_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m1645301223_gshared (Func_2_t2317969963 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Linq.IOrderedEnumerable`1<!!0> System.Linq.Enumerable::OrderByDescending<System.Object,System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
extern "C"  RuntimeObject* Enumerable_OrderByDescending_TisRuntimeObject_TisInt32_t2950945753_m4201283710_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t2317969963 * p1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  ObjectU5BU5D_t2843939325* Enumerable_ToArray_TisRuntimeObject_m698722831_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_1__ctor_m2434317150_gshared (UnityAction_1_t3664942305 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
extern "C"  void UnityEvent_1_AddListener_m3703050833_gshared (UnityEvent_1_t3961765668 * __this, UnityAction_1_t3664942305 * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m1150804732_gshared (Func_2_t764290984 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Linq.IOrderedEnumerable`1<!!0> System.Linq.Enumerable::OrderBy<System.Object,System.Single>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
extern "C"  RuntimeObject* Enumerable_OrderBy_TisRuntimeObject_TisSingle_t1397266774_m2734424309_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t764290984 * p1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  List_1_t257213610 * Enumerable_ToList_TisRuntimeObject_m3517240806_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  RuntimeObject * Enumerable_FirstOrDefault_TisRuntimeObject_m714693565_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::LastOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  RuntimeObject * Enumerable_LastOrDefault_TisRuntimeObject_m4245296635_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
extern "C"  bool List_1_Remove_m1416767016_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
extern "C"  void Queue_1__ctor_m3749217910_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m1061214600_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Transform_t3600365921 * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
extern "C"  void Queue_1_Enqueue_m1868480850_gshared (Queue_1_t2926365658 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C"  void Dictionary_2_Add_m2387223709_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
extern "C"  RuntimeObject * Dictionary_2_get_Item_m2714930061_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
extern "C"  RuntimeObject * Queue_1_Dequeue_m3550993416_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C"  void List_1__ctor_m1628857705_gshared (List_1_t128053199 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
extern "C"  void List_1_Add_m697420525_gshared (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C"  int32_t List_1_get_Count_m361000296_gshared (List_1_t128053199 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C"  int32_t List_1_get_Item_m888956288_gshared (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0[] UnityEngine.Object::FindObjectsOfType<ParallaxSystem>()
#define Object_FindObjectsOfType_TisParallaxSystem_t3373904545_m3851594110(__this /* static, unused */, method) ((  ParallaxSystemU5BU5D_t1497346492* (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m2776316817_gshared)(__this /* static, unused */, method)
// !!0[] UnityEngine.Object::FindObjectsOfType<SpawningSystem>()
#define Object_FindObjectsOfType_TisSpawningSystem_t3234322778_m1214314677(__this /* static, unused */, method) ((  SpawningSystemU5BU5D_t2087052287* (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m2776316817_gshared)(__this /* static, unused */, method)
// System.Void GameManager::EnableScripts(System.Boolean)
extern "C"  void GameManager_EnableScripts_m3841988619 (GameManager_t1536523654 * __this, bool ___enable0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::get_anyKeyDown()
extern "C"  bool Input_get_anyKeyDown_m1564765341 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C"  void Behaviour_set_enabled_m20417929 (Behaviour_t1437897464 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SpawningSystem::StopSpawing()
extern "C"  void SpawningSystem_StopSpawing_m3302915996 (SpawningSystem_t3234322778 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C"  ButtonClickedEvent_t48803504 * Button_get_onClick_m2332132945 (Button_t4055032469 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction__ctor_m772160306 (UnityAction_t3245792599 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
extern "C"  void UnityEvent_AddListener_m2276267359 (UnityEvent_t2581268647 * __this, UnityAction_t3245792599 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object)
extern "C"  String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C"  void SceneManager_LoadScene_m1758133949 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GameoverPopup::OnClick(System.String)
extern "C"  void GameoverPopup_OnClick_m869720930 (GameoverPopup_t2345258755 * __this, String_t* ___sceneName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C"  String_t* String_Format_m2556382932 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_timeScale()
extern "C"  float Time_get_timeScale_m701790074 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
extern "C"  void Time_set_timeScale_m1127545364 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GameplayPopup::OnPauseResume(System.Boolean)
extern "C"  void GameplayPopup_OnPauseResume_m2750323713 (GameplayPopup_t3833071484 * __this, bool ___isPause0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
extern "C"  String_t* String_Format_m3339413201 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, RuntimeObject * p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C"  int32_t Animator_StringToHash_m1666053228 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C"  Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C"  Delegate_t1188392813 * Delegate_Remove_m334097152 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
#define Component_GetComponent_TisAnimator_t434523843_m2351447238(__this, method) ((  Animator_t434523843 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void UnityEngine.Animator::SetTrigger(System.Int32)
extern "C"  void Animator_SetTrigger_m332916954 (Animator_t434523843 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Item/AfterCollectItem::Invoke(System.Int32)
extern "C"  void AfterCollectItem_Invoke_m1527972829 (AfterCollectItem_t2443332196 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Leaderboard/<UploadHighscore>c__Iterator0::.ctor()
extern "C"  void U3CUploadHighscoreU3Ec__Iterator0__ctor_m1427742591 (U3CUploadHighscoreU3Ec__Iterator0_t1095784518 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Leaderboard/<DownloadHighscore>c__Iterator1::.ctor()
extern "C"  void U3CDownloadHighscoreU3Ec__Iterator1__ctor_m523033430 (U3CDownloadHighscoreU3Ec__Iterator1_t1659249822 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[],System.StringSplitOptions)
extern "C"  StringU5BU5D_t1281789340* String_Split_m1466646415 (String_t* __this, CharU5BU5D_t3528271667* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int32::Parse(System.String)
extern "C"  int32_t Int32_Parse_m1033611559 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Parse(System.String)
extern "C"  DateTime_t3738529785  DateTime_Parse_m2550724587 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Highscore::.ctor(System.String,System.Int32,System.DateTime)
extern "C"  void Highscore__ctor_m1880064685 (Highscore_t1172667341 * __this, String_t* ___username0, int32_t ___score1, DateTime_t3738529785  ___date2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::.ctor(System.String)
extern "C"  void WWW__ctor_m2915079343 (WWW_t3688466362 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_error()
extern "C"  String_t* WWW_get_error_m3055313367 (WWW_t3688466362 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C"  bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_text()
extern "C"  String_t* WWW_get_text_m898164367 (WWW_t3688466362 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
extern "C"  void Debug_LogFormat_m309087137 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Highscore[] Leaderboard::FormatHighscore(System.String)
extern "C"  HighscoreU5BU5D_t1440391776* Leaderboard_FormatHighscore_m560532354 (RuntimeObject * __this /* static, unused */, String_t* ___textStream0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Leaderboard/AfterDownloadHighscore::Invoke(Highscore[])
extern "C"  void AfterDownloadHighscore_Invoke_m938133247 (AfterDownloadHighscore_t1806836570 * __this, HighscoreU5BU5D_t1440391776* ___highscoreArray0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
extern "C"  void Debug_LogWarningFormat_m2535776735 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor()
extern "C"  void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::EscapeURL(System.String)
extern "C"  String_t* WWW_EscapeURL_m4251687403 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object[])
extern "C"  String_t* String_Format_m630303134 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Leaderboard/AfterDownloadHighscore::.ctor(System.Object,System.IntPtr)
extern "C"  void AfterDownloadHighscore__ctor_m1227654092 (AfterDownloadHighscore_t1806836570 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Leaderboard::DownloadHighscore(Leaderboard/AfterDownloadHighscore)
extern "C"  RuntimeObject* Leaderboard_DownloadHighscore_m2353152059 (RuntimeObject * __this /* static, unused */, AfterDownloadHighscore_t1806836570 * ___onAfterDownloadHighscore0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C"  Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Func`2<Highscore,System.Int32>::.ctor(System.Object,System.IntPtr)
#define Func_2__ctor_m4218885744(__this, p0, p1, method) ((  void (*) (Func_2_t914422414 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m1645301223_gshared)(__this, p0, p1, method)
// System.Linq.IOrderedEnumerable`1<!!0> System.Linq.Enumerable::OrderByDescending<Highscore,System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
#define Enumerable_OrderByDescending_TisHighscore_t1172667341_TisInt32_t2950945753_m1663012717(__this /* static, unused */, p0, p1, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t914422414 *, const RuntimeMethod*))Enumerable_OrderByDescending_TisRuntimeObject_TisInt32_t2950945753_m4201283710_gshared)(__this /* static, unused */, p0, p1, method)
// !!0[] System.Linq.Enumerable::ToArray<Highscore>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToArray_TisHighscore_t1172667341_m1651663599(__this /* static, unused */, p0, method) ((  HighscoreU5BU5D_t1440391776* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m698722831_gshared)(__this /* static, unused */, p0, method)
// System.Void System.Text.StringBuilder::.ctor()
extern "C"  void StringBuilder__ctor_m3121283359 (StringBuilder_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Highscore::get_Text()
extern "C"  String_t* Highscore_get_Text_m4237754476 (Highscore_t1172667341 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
extern "C"  StringBuilder_t * StringBuilder_AppendFormat_m3255666490 (StringBuilder_t * __this, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Highscore::get_Score()
extern "C"  int32_t Highscore_get_Score_m2521617566 (Highscore_t1172667341 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::get_onEndEdit()
extern "C"  SubmitEvent_t648412432 * InputField_get_onEndEdit_m3015534368 (InputField_t3762917431 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityAction`1<System.String>::.ctor(System.Object,System.IntPtr)
#define UnityAction_1__ctor_m1742195854(__this, p0, p1, method) ((  void (*) (UnityAction_1_t2432286830 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m2434317150_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
#define UnityEvent_1_AddListener_m2268272923(__this, p0, method) ((  void (*) (UnityEvent_1_t2729110193 *, UnityAction_1_t2432286830 *, const RuntimeMethod*))UnityEvent_1_AddListener_m3703050833_gshared)(__this, p0, method)
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
extern "C"  void Selectable_set_interactable_m3105888815 (Selectable_t3250028441 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.InputField::get_text()
extern "C"  String_t* InputField_get_text_m3534748202 (InputField_t3762917431 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerLog::SetName(System.String)
extern "C"  void PlayerLog_SetName_m317683739 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Obstacle::.ctor()
extern "C"  void Obstacle__ctor_m1962423779 (Obstacle_t162511623 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector2_t2156229523  Vector2_op_Implicit_m4260192859 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_time()
extern "C"  float Time_get_time_m2907476221 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C"  Camera_t4157153871 * Camera_get_main_m3643453163 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<ParallaxSystem/ParallaxItem>::.ctor()
#define List_1__ctor_m2420326261(__this, method) ((  void (*) (List_1_t337817251 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C"  Transform_t3600365921 * Transform_GetChild_m1092972975 (Transform_t3600365921 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
#define Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(__this, method) ((  SpriteRenderer_t3235626157 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C"  bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ParallaxSystem/ParallaxItem::.ctor()
extern "C"  void ParallaxItem__ctor_m1622181518 (ParallaxItem_t3160709805 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<ParallaxSystem/ParallaxItem>::Add(!0)
#define List_1_Add_m572897839(__this, p0, method) ((  void (*) (List_1_t337817251 *, ParallaxItem_t3160709805 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C"  int32_t Transform_get_childCount_m3145433196 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Func`2<ParallaxSystem/ParallaxItem,System.Single>::.ctor(System.Object,System.IntPtr)
#define Func_2__ctor_m911400943(__this, p0, p1, method) ((  void (*) (Func_2_t1357832619 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m1150804732_gshared)(__this, p0, p1, method)
// System.Linq.IOrderedEnumerable`1<!!0> System.Linq.Enumerable::OrderBy<ParallaxSystem/ParallaxItem,System.Single>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
#define Enumerable_OrderBy_TisParallaxItem_t3160709805_TisSingle_t1397266774_m2471274649(__this /* static, unused */, p0, p1, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t1357832619 *, const RuntimeMethod*))Enumerable_OrderBy_TisRuntimeObject_TisSingle_t1397266774_m2734424309_gshared)(__this /* static, unused */, p0, p1, method)
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<ParallaxSystem/ParallaxItem>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToList_TisParallaxItem_t3160709805_m3296214996(__this /* static, unused */, p0, method) ((  List_1_t337817251 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m3517240806_gshared)(__this /* static, unused */, p0, method)
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t2156229523  Vector2_op_Multiply_m2347887432 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C"  Vector3_t3722313464  Vector2_op_Implicit_m1860157806 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
extern "C"  void Transform_Translate_m1810197270 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 System.Linq.Enumerable::FirstOrDefault<ParallaxSystem/ParallaxItem>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_FirstOrDefault_TisParallaxItem_t3160709805_m938612081(__this /* static, unused */, p0, method) ((  ParallaxItem_t3160709805 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_m714693565_gshared)(__this /* static, unused */, p0, method)
// System.Boolean UnityEngine.Renderer::get_isVisible()
extern "C"  bool Renderer_get_isVisible_m78730451 (Renderer_t2627027031 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 System.Linq.Enumerable::LastOrDefault<ParallaxSystem/ParallaxItem>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_LastOrDefault_TisParallaxItem_t3160709805_m4108382031(__this /* static, unused */, p0, method) ((  ParallaxItem_t3160709805 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_LastOrDefault_TisRuntimeObject_m4245296635_gshared)(__this /* static, unused */, p0, method)
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
extern "C"  Bounds_t2266837910  Renderer_get_bounds_m1803204000 (Renderer_t2627027031 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
extern "C"  Vector3_t3722313464  Bounds_get_max_m3756577669 (Bounds_t2266837910 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
extern "C"  Vector3_t3722313464  Bounds_get_min_m3755135869 (Bounds_t2266837910 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<ParallaxSystem/ParallaxItem>::Remove(!0)
#define List_1_Remove_m3933805465(__this, p0, method) ((  bool (*) (List_1_t337817251 *, ParallaxItem_t3160709805 *, const RuntimeMethod*))List_1_Remove_m1416767016_gshared)(__this, p0, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
#define Component_GetComponent_TisAudioSource_t3935305588_m1977431131(__this, method) ((  AudioSource_t3935305588 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
extern "C"  GameObject_t1113636619 * Collision2D_get_gameObject_m1443495885 (Collision2D_t2842956331 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
extern "C"  bool GameObject_CompareTag_m3144439756 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnDeath()
extern "C"  void PlayerController_OnDeath_m2333206973 (PlayerController_t2064355688 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<Item>()
#define GameObject_GetComponent_TisItem_t2953980098_m462103850(__this, method) ((  Item_t2953980098 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void Item/AfterCollectItem::.ctor(System.Object,System.IntPtr)
extern "C"  void AfterCollectItem__ctor_m607793936 (AfterCollectItem_t2443332196 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Item::OnCollected(Item/AfterCollectItem)
extern "C"  void Item_OnCollected_m2474561728 (Item_t2953980098 * __this, AfterCollectItem_t2443332196 * ___onAfterCollectItem0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
extern "C"  void AudioSource_PlayOneShot_m1688286683 (AudioSource_t3935305588 * __this, AudioClip_t3680889665 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::UpdateCollectedItems(System.Int32)
extern "C"  void UIManager_UpdateCollectedItems_m3094805831 (UIManager_t1042050227 * __this, int32_t ___collectedItems0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Stop()
extern "C"  void AudioSource_Stop_m2682712816 (AudioSource_t3935305588 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager::OnGameOver()
extern "C"  void UIManager_OnGameOver_m921644786 (UIManager_t1042050227 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String PlayerLog::GetName()
extern "C"  String_t* PlayerLog_GetName_m2322447201 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Leaderboard::UploadHighscore(System.String,System.Int32)
extern "C"  RuntimeObject* Leaderboard_UploadHighscore_m3473756086 (RuntimeObject * __this /* static, unused */, String_t* ___username0, int32_t ___score1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
extern "C"  void PlayerPrefs_SetString_m2101271233 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
extern "C"  String_t* PlayerPrefs_GetString_m389913383 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t939494601_m1531613439(__this, method) ((  Rigidbody2D_t939494601 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
extern "C"  int32_t LayerMask_op_Implicit_m3296792737 (RuntimeObject * __this /* static, unused */, LayerMask_t3493934918  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Linecast(UnityEngine.Vector2,UnityEngine.Vector2,System.Int32)
extern "C"  RaycastHit2D_t2279581989  Physics2D_Linecast_m2347689996 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RaycastHit2D::op_Implicit(UnityEngine.RaycastHit2D)
extern "C"  bool RaycastHit2D_op_Implicit_m653385179 (RuntimeObject * __this /* static, unused */, RaycastHit2D_t2279581989  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern "C"  bool Input_GetKeyDown_m17791917 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
extern "C"  Vector2_t2156229523  Vector2_get_up_m2647420593 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
extern "C"  void Rigidbody2D_AddForce_m1113499586 (Rigidbody2D_t939494601 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Queue`1<UnityEngine.GameObject>>::.ctor()
#define Dictionary_2__ctor_m3078442726(__this, method) ((  void (*) (Dictionary_2_t745152412 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.GameObject>::.ctor()
#define Queue_1__ctor_m3618464516(__this, method) ((  void (*) (Queue_1_t959896113 *, const RuntimeMethod*))Queue_1__ctor_m3749217910_gshared)(__this, method)
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
#define Object_Instantiate_TisGameObject_t1113636619_m3215236302(__this /* static, unused */, p0, p1, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, Transform_t3600365921 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1061214600_gshared)(__this /* static, unused */, p0, p1, method)
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
extern "C"  GameObject_t1113636619 * GameObject_get_gameObject_m3693461266 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Queue`1<UnityEngine.GameObject>::Enqueue(!0)
#define Queue_1_Enqueue_m2666802599(__this, p0, method) ((  void (*) (Queue_1_t959896113 *, GameObject_t1113636619 *, const RuntimeMethod*))Queue_1_Enqueue_m1868480850_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Queue`1<UnityEngine.GameObject>>::Add(!0,!1)
#define Dictionary_2_Add_m1312697002(__this, p0, p1, method) ((  void (*) (Dictionary_2_t745152412 *, String_t*, Queue_1_t959896113 *, const RuntimeMethod*))Dictionary_2_Add_m2387223709_gshared)(__this, p0, p1, method)
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Queue`1<UnityEngine.GameObject>>::get_Item(!0)
#define Dictionary_2_get_Item_m3259100016(__this, p0, method) ((  Queue_1_t959896113 * (*) (Dictionary_2_t745152412 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m2714930061_gshared)(__this, p0, method)
// !0 System.Collections.Generic.Queue`1<UnityEngine.GameObject>::Dequeue()
#define Queue_1_Dequeue_m526815917(__this, method) ((  GameObject_t1113636619 * (*) (Queue_1_t959896113 *, const RuntimeMethod*))Queue_1_Dequeue_m3550993416_gshared)(__this, method)
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C"  void Transform_set_rotation_m3524318132 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Pooling::.ctor()
extern "C"  void Pooling__ctor_m2081866961 (Pooling_t2442357387 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
#define List_1__ctor_m1628857705(__this, method) ((  void (*) (List_1_t128053199 *, const RuntimeMethod*))List_1__ctor_m1628857705_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
#define List_1_Add_m697420525(__this, p0, method) ((  void (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))List_1_Add_m697420525_gshared)(__this, p0, method)
// System.Collections.IEnumerator SpawningSystem::OnSpawn()
extern "C"  RuntimeObject* SpawningSystem_OnSpawn_m2349354428 (SpawningSystem_t3234322778 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
extern "C"  void MonoBehaviour_StopCoroutine_m907039165 (MonoBehaviour_t3962482529 * __this, Coroutine_t3829159415 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SpawningSystem/<OnSpawn>c__Iterator0::.ctor()
extern "C"  void U3COnSpawnU3Ec__Iterator0__ctor_m1420590988 (U3COnSpawnU3Ec__Iterator0_t3539043052 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
#define List_1_get_Count_m361000296(__this, method) ((  int32_t (*) (List_1_t128053199 *, const RuntimeMethod*))List_1_get_Count_m361000296_gshared)(__this, method)
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C"  int32_t Random_Range_m4054026115 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
#define List_1_get_Item_m888956288(__this, p0, method) ((  int32_t (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))List_1_get_Item_m888956288_gshared)(__this, p0, method)
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C"  Quaternion_t2301928331  Transform_get_rotation_m3502953881 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Pooling::Dequeue(System.String,UnityEngine.Vector2,UnityEngine.Quaternion)
extern "C"  GameObject_t1113636619 * Pooling_Dequeue_m2124937373 (Pooling_t2442357387 * __this, String_t* ___tag0, Vector2_t2156229523  ___position1, Quaternion_t2301928331  ___rotation2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
extern "C"  float Random_Range_m2202990745 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
extern "C"  float Mathf_Max_m3146388979 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SpawningSystem::Spawn()
extern "C"  void SpawningSystem_Spawn_m2240802350 (SpawningSystem_t3234322778 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GameplayPopup::Initialize()
extern "C"  void GameplayPopup_Initialize_m3142122491 (GameplayPopup_t3833071484 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GameoverPopup::Initialize()
extern "C"  void GameoverPopup_Initialize_m3192452224 (GameoverPopup_t2345258755 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_timeSinceLevelLoad()
extern "C"  float Time_get_timeSinceLevelLoad_m2224611026 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GameplayPopup::UpdateGameplayTime(System.Single)
extern "C"  void GameplayPopup_UpdateGameplayTime_m3883448322 (GameplayPopup_t3833071484 * __this, float ___currentGameplayTime0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GameplayPopup::UpdateCollectedItems(System.Int32)
extern "C"  void GameplayPopup_UpdateCollectedItems_m958571377 (GameplayPopup_t3833071484 * __this, int32_t ___collectedItems0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GameplayPopup::Hide()
extern "C"  void GameplayPopup_Hide_m4018672219 (GameplayPopup_t3833071484 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String GameplayPopup::get_CollectedItemsText()
extern "C"  String_t* GameplayPopup_get_CollectedItemsText_m1315854544 (GameplayPopup_t3833071484 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String GameplayPopup::get_GameplayTimeText()
extern "C"  String_t* GameplayPopup_get_GameplayTimeText_m2611425216 (GameplayPopup_t3833071484 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GameoverPopup::Show(System.String,System.String)
extern "C"  void GameoverPopup_Show_m2080404054 (GameoverPopup_t2345258755 * __this, String_t* ___collectedItems0, String_t* ___gameplayTime1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManager::.ctor()
extern "C"  void GameManager__ctor_m180891015 (GameManager_t1536523654 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::Awake()
extern "C"  void GameManager_Awake_m2466247815 (GameManager_t1536523654 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_Awake_m2466247815_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		ParallaxSystemU5BU5D_t1497346492* L_0 = Object_FindObjectsOfType_TisParallaxSystem_t3373904545_m3851594110(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectsOfType_TisParallaxSystem_t3373904545_m3851594110_RuntimeMethod_var);
		__this->set__parallaxSystems_2(L_0);
		SpawningSystemU5BU5D_t2087052287* L_1 = Object_FindObjectsOfType_TisSpawningSystem_t3234322778_m1214314677(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectsOfType_TisSpawningSystem_t3234322778_m1214314677_RuntimeMethod_var);
		__this->set__spawningSystems_3(L_1);
		GameManager_EnableScripts_m3841988619(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::Update()
extern "C"  void GameManager_Update_m1981238775 (GameManager_t1536523654 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_Update_m1981238775_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_get_anyKeyDown_m1564765341(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		bool L_1 = __this->get__isAnyKeyDownPressed_4();
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		__this->set__isAnyKeyDownPressed_4((bool)1);
		GameManager_EnableScripts_m3841988619(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Void GameManager::EnableScripts(System.Boolean)
extern "C"  void GameManager_EnableScripts_m3841988619 (GameManager_t1536523654 * __this, bool ___enable0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0019;
	}

IL_0007:
	{
		ParallaxSystemU5BU5D_t1497346492* L_0 = __this->get__parallaxSystems_2();
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		ParallaxSystem_t3373904545 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		bool L_4 = ___enable0;
		Behaviour_set_enabled_m20417929(L_3, L_4, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0019:
	{
		int32_t L_6 = V_0;
		ParallaxSystemU5BU5D_t1497346492* L_7 = __this->get__parallaxSystems_2();
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length)))))))
		{
			goto IL_0007;
		}
	}
	{
		V_1 = 0;
		goto IL_0053;
	}

IL_002e:
	{
		SpawningSystemU5BU5D_t2087052287* L_8 = __this->get__spawningSystems_3();
		int32_t L_9 = V_1;
		int32_t L_10 = L_9;
		SpawningSystem_t3234322778 * L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		bool L_12 = ___enable0;
		Behaviour_set_enabled_m20417929(L_11, L_12, /*hidden argument*/NULL);
		bool L_13 = ___enable0;
		if (L_13)
		{
			goto IL_004f;
		}
	}
	{
		SpawningSystemU5BU5D_t2087052287* L_14 = __this->get__spawningSystems_3();
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		SpawningSystem_t3234322778 * L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		SpawningSystem_StopSpawing_m3302915996(L_17, /*hidden argument*/NULL);
	}

IL_004f:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0053:
	{
		int32_t L_19 = V_1;
		SpawningSystemU5BU5D_t2087052287* L_20 = __this->get__spawningSystems_3();
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))))))
		{
			goto IL_002e;
		}
	}
	{
		PlayerMovement_t2731566919 * L_21 = __this->get__player_5();
		bool L_22 = ___enable0;
		Behaviour_set_enabled_m20417929(L_21, L_22, /*hidden argument*/NULL);
		UIManager_t1042050227 * L_23 = __this->get__uiManager_6();
		bool L_24 = ___enable0;
		Behaviour_set_enabled_m20417929(L_23, L_24, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameoverPopup::.ctor()
extern "C"  void GameoverPopup__ctor_m3843202431 (GameoverPopup_t2345258755 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameoverPopup::Initialize()
extern "C"  void GameoverPopup_Initialize_m3192452224 (GameoverPopup_t2345258755 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameoverPopup_Initialize_m3192452224_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get__popup_0();
		GameObject_SetActive_m796801857(L_0, (bool)0, /*hidden argument*/NULL);
		Button_t4055032469 * L_1 = __this->get__replayButton_3();
		ButtonClickedEvent_t48803504 * L_2 = Button_get_onClick_m2332132945(L_1, /*hidden argument*/NULL);
		intptr_t L_3 = (intptr_t)GameoverPopup_U3CInitializeU3Em__0_m438357441_RuntimeMethod_var;
		UnityAction_t3245792599 * L_4 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_4, __this, L_3, /*hidden argument*/NULL);
		UnityEvent_AddListener_m2276267359(L_2, L_4, /*hidden argument*/NULL);
		Button_t4055032469 * L_5 = __this->get__menuButton_4();
		ButtonClickedEvent_t48803504 * L_6 = Button_get_onClick_m2332132945(L_5, /*hidden argument*/NULL);
		intptr_t L_7 = (intptr_t)GameoverPopup_U3CInitializeU3Em__1_m3167240796_RuntimeMethod_var;
		UnityAction_t3245792599 * L_8 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_8, __this, L_7, /*hidden argument*/NULL);
		UnityEvent_AddListener_m2276267359(L_6, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameoverPopup::Show(System.String,System.String)
extern "C"  void GameoverPopup_Show_m2080404054 (GameoverPopup_t2345258755 * __this, String_t* ___collectedItems0, String_t* ___gameplayTime1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameoverPopup_Show_m2080404054_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t1901882714 * L_0 = __this->get__collectedItemsText_1();
		String_t* L_1 = ___collectedItems0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral2261934641, L_1, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		Text_t1901882714 * L_3 = __this->get__gameplayTimeText_2();
		String_t* L_4 = ___gameplayTime1;
		String_t* L_5 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3849149357, L_4, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
		GameObject_t1113636619 * L_6 = __this->get__popup_0();
		GameObject_SetActive_m796801857(L_6, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameoverPopup::OnClick(System.String)
extern "C"  void GameoverPopup_OnClick_m869720930 (GameoverPopup_t2345258755 * __this, String_t* ___sceneName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___sceneName0;
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameoverPopup::<Initialize>m__0()
extern "C"  void GameoverPopup_U3CInitializeU3Em__0_m438357441 (GameoverPopup_t2345258755 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameoverPopup_U3CInitializeU3Em__0_m438357441_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameoverPopup_OnClick_m869720930(__this, _stringLiteral62725266, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameoverPopup::<Initialize>m__1()
extern "C"  void GameoverPopup_U3CInitializeU3Em__1_m3167240796 (GameoverPopup_t2345258755 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameoverPopup_U3CInitializeU3Em__1_m3167240796_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameoverPopup_OnClick_m869720930(__this, _stringLiteral1555075383, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameplayPopup::.ctor()
extern "C"  void GameplayPopup__ctor_m197894066 (GameplayPopup_t3833071484 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String GameplayPopup::get_GameplayTimeText()
extern "C"  String_t* GameplayPopup_get_GameplayTimeText_m2611425216 (GameplayPopup_t3833071484 * __this, const RuntimeMethod* method)
{
	{
		Text_t1901882714 * L_0 = __this->get__gameplayTimeText_2();
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(71 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		return L_1;
	}
}
// System.String GameplayPopup::get_CollectedItemsText()
extern "C"  String_t* GameplayPopup_get_CollectedItemsText_m1315854544 (GameplayPopup_t3833071484 * __this, const RuntimeMethod* method)
{
	{
		Text_t1901882714 * L_0 = __this->get__collectedItemsText_1();
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(71 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		return L_1;
	}
}
// System.Void GameplayPopup::Initialize()
extern "C"  void GameplayPopup_Initialize_m3142122491 (GameplayPopup_t3833071484 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameplayPopup_Initialize_m3142122491_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Button_t4055032469 * L_0 = __this->get__pauseButton_3();
		ButtonClickedEvent_t48803504 * L_1 = Button_get_onClick_m2332132945(L_0, /*hidden argument*/NULL);
		intptr_t L_2 = (intptr_t)GameplayPopup_U3CInitializeU3Em__0_m3635574392_RuntimeMethod_var;
		UnityAction_t3245792599 * L_3 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_3, __this, L_2, /*hidden argument*/NULL);
		UnityEvent_AddListener_m2276267359(L_1, L_3, /*hidden argument*/NULL);
		Button_t4055032469 * L_4 = __this->get__resumeButton_4();
		ButtonClickedEvent_t48803504 * L_5 = Button_get_onClick_m2332132945(L_4, /*hidden argument*/NULL);
		intptr_t L_6 = (intptr_t)GameplayPopup_U3CInitializeU3Em__1_m2069490451_RuntimeMethod_var;
		UnityAction_t3245792599 * L_7 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_7, __this, L_6, /*hidden argument*/NULL);
		UnityEvent_AddListener_m2276267359(L_5, L_7, /*hidden argument*/NULL);
		Button_t4055032469 * L_8 = __this->get__resumeButton_4();
		GameObject_t1113636619 * L_9 = Component_get_gameObject_m442555142(L_8, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_9, (bool)0, /*hidden argument*/NULL);
		Button_t4055032469 * L_10 = __this->get__menuButton_5();
		ButtonClickedEvent_t48803504 * L_11 = Button_get_onClick_m2332132945(L_10, /*hidden argument*/NULL);
		intptr_t L_12 = (intptr_t)GameplayPopup_OnMenu_m3268732267_RuntimeMethod_var;
		UnityAction_t3245792599 * L_13 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_13, __this, L_12, /*hidden argument*/NULL);
		UnityEvent_AddListener_m2276267359(L_11, L_13, /*hidden argument*/NULL);
		Button_t4055032469 * L_14 = __this->get__menuButton_5();
		GameObject_t1113636619 * L_15 = Component_get_gameObject_m442555142(L_14, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_15, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_16 = __this->get__popup_0();
		GameObject_SetActive_m796801857(L_16, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameplayPopup::UpdateGameplayTime(System.Single)
extern "C"  void GameplayPopup_UpdateGameplayTime_m3883448322 (GameplayPopup_t3833071484 * __this, float ___currentGameplayTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameplayPopup_UpdateGameplayTime_m3883448322_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		float L_0 = ___currentGameplayTime0;
		V_0 = (fmodf(((float)((float)L_0/(float)(60.0f))), (60.0f)));
		float L_1 = ___currentGameplayTime0;
		V_1 = (fmodf(L_1, (60.0f)));
		Text_t1901882714 * L_2 = __this->get__gameplayTimeText_2();
		float L_3 = V_0;
		float L_4 = L_3;
		RuntimeObject * L_5 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_4);
		float L_6 = V_1;
		float L_7 = L_6;
		RuntimeObject * L_8 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral547424145, L_5, L_8, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_9);
		return;
	}
}
// System.Void GameplayPopup::UpdateCollectedItems(System.Int32)
extern "C"  void GameplayPopup_UpdateCollectedItems_m958571377 (GameplayPopup_t3833071484 * __this, int32_t ___collectedItems0, const RuntimeMethod* method)
{
	{
		Text_t1901882714 * L_0 = __this->get__collectedItemsText_1();
		String_t* L_1 = Int32_ToString_m141394615((&___collectedItems0), /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void GameplayPopup::Hide()
extern "C"  void GameplayPopup_Hide_m4018672219 (GameplayPopup_t3833071484 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = __this->get__popup_0();
		GameObject_SetActive_m796801857(L_0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameplayPopup::OnPauseResume(System.Boolean)
extern "C"  void GameplayPopup_OnPauseResume_m2750323713 (GameplayPopup_t3833071484 * __this, bool ___isPause0, const RuntimeMethod* method)
{
	{
		float L_0 = Time_get_timeScale_m701790074(NULL /*static, unused*/, /*hidden argument*/NULL);
		Time_set_timeScale_m1127545364(NULL /*static, unused*/, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_0)), /*hidden argument*/NULL);
		Button_t4055032469 * L_1 = __this->get__pauseButton_3();
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(L_1, /*hidden argument*/NULL);
		bool L_3 = ___isPause0;
		GameObject_SetActive_m796801857(L_2, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		Button_t4055032469 * L_4 = __this->get__resumeButton_4();
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(L_4, /*hidden argument*/NULL);
		bool L_6 = ___isPause0;
		GameObject_SetActive_m796801857(L_5, L_6, /*hidden argument*/NULL);
		Button_t4055032469 * L_7 = __this->get__menuButton_5();
		GameObject_t1113636619 * L_8 = Component_get_gameObject_m442555142(L_7, /*hidden argument*/NULL);
		bool L_9 = ___isPause0;
		GameObject_SetActive_m796801857(L_8, L_9, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_10 = __this->get__pausePanel_6();
		bool L_11 = ___isPause0;
		GameObject_SetActive_m796801857(L_10, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameplayPopup::OnMenu()
extern "C"  void GameplayPopup_OnMenu_m3268732267 (GameplayPopup_t3833071484 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameplayPopup_OnMenu_m3268732267_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral1555075383, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameplayPopup::<Initialize>m__0()
extern "C"  void GameplayPopup_U3CInitializeU3Em__0_m3635574392 (GameplayPopup_t3833071484 * __this, const RuntimeMethod* method)
{
	{
		GameplayPopup_OnPauseResume_m2750323713(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameplayPopup::<Initialize>m__1()
extern "C"  void GameplayPopup_U3CInitializeU3Em__1_m2069490451 (GameplayPopup_t3833071484 * __this, const RuntimeMethod* method)
{
	{
		GameplayPopup_OnPauseResume_m2750323713(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Highscore::.ctor(System.String,System.Int32,System.DateTime)
extern "C"  void Highscore__ctor_m1880064685 (Highscore_t1172667341 * __this, String_t* ___username0, int32_t ___score1, DateTime_t3738529785  ___date2, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___username0;
		__this->set__username_0(L_0);
		int32_t L_1 = ___score1;
		__this->set__score_1(L_1);
		DateTime_t3738529785  L_2 = ___date2;
		__this->set__date_2(L_2);
		return;
	}
}
// System.Int32 Highscore::get_Score()
extern "C"  int32_t Highscore_get_Score_m2521617566 (Highscore_t1172667341 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__score_1();
		return L_0;
	}
}
// System.String Highscore::get_Text()
extern "C"  String_t* Highscore_get_Text_m4237754476 (Highscore_t1172667341 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Highscore_get_Text_m4237754476_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_t3738529785  L_0 = __this->get__date_2();
		DateTime_t3738529785  L_1 = L_0;
		RuntimeObject * L_2 = Box(DateTime_t3738529785_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = __this->get__username_0();
		int32_t L_4 = __this->get__score_1();
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Format_m3339413201(NULL /*static, unused*/, _stringLiteral4006088032, L_2, L_3, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Item::.ctor()
extern "C"  void Item__ctor_m64206515 (Item_t2953980098 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Item__ctor_m64206515_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = Animator_StringToHash_m1666053228(NULL /*static, unused*/, _stringLiteral2359133640, /*hidden argument*/NULL);
		__this->set__hashCollect_2(L_0);
		int32_t L_1 = Animator_StringToHash_m1666053228(NULL /*static, unused*/, _stringLiteral347475160, /*hidden argument*/NULL);
		__this->set__hashNormalize_3(L_1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Item::add__onAfterCollectItem(Item/AfterCollectItem)
extern "C"  void Item_add__onAfterCollectItem_m1109577406 (Item_t2953980098 * __this, AfterCollectItem_t2443332196 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Item_add__onAfterCollectItem_m1109577406_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AfterCollectItem_t2443332196 * V_0 = NULL;
	AfterCollectItem_t2443332196 * V_1 = NULL;
	{
		AfterCollectItem_t2443332196 * L_0 = __this->get__onAfterCollectItem_6();
		V_0 = L_0;
	}

IL_0007:
	{
		AfterCollectItem_t2443332196 * L_1 = V_0;
		V_1 = L_1;
		AfterCollectItem_t2443332196 ** L_2 = __this->get_address_of__onAfterCollectItem_6();
		AfterCollectItem_t2443332196 * L_3 = V_1;
		AfterCollectItem_t2443332196 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		AfterCollectItem_t2443332196 * L_6 = V_0;
		AfterCollectItem_t2443332196 * L_7 = InterlockedCompareExchangeImpl<AfterCollectItem_t2443332196 *>(L_2, ((AfterCollectItem_t2443332196 *)CastclassSealed((RuntimeObject*)L_5, AfterCollectItem_t2443332196_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		AfterCollectItem_t2443332196 * L_8 = V_0;
		AfterCollectItem_t2443332196 * L_9 = V_1;
		if ((!(((RuntimeObject*)(AfterCollectItem_t2443332196 *)L_8) == ((RuntimeObject*)(AfterCollectItem_t2443332196 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Item::remove__onAfterCollectItem(Item/AfterCollectItem)
extern "C"  void Item_remove__onAfterCollectItem_m2891778148 (Item_t2953980098 * __this, AfterCollectItem_t2443332196 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Item_remove__onAfterCollectItem_m2891778148_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AfterCollectItem_t2443332196 * V_0 = NULL;
	AfterCollectItem_t2443332196 * V_1 = NULL;
	{
		AfterCollectItem_t2443332196 * L_0 = __this->get__onAfterCollectItem_6();
		V_0 = L_0;
	}

IL_0007:
	{
		AfterCollectItem_t2443332196 * L_1 = V_0;
		V_1 = L_1;
		AfterCollectItem_t2443332196 ** L_2 = __this->get_address_of__onAfterCollectItem_6();
		AfterCollectItem_t2443332196 * L_3 = V_1;
		AfterCollectItem_t2443332196 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		AfterCollectItem_t2443332196 * L_6 = V_0;
		AfterCollectItem_t2443332196 * L_7 = InterlockedCompareExchangeImpl<AfterCollectItem_t2443332196 *>(L_2, ((AfterCollectItem_t2443332196 *)CastclassSealed((RuntimeObject*)L_5, AfterCollectItem_t2443332196_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		AfterCollectItem_t2443332196 * L_8 = V_0;
		AfterCollectItem_t2443332196 * L_9 = V_1;
		if ((!(((RuntimeObject*)(AfterCollectItem_t2443332196 *)L_8) == ((RuntimeObject*)(AfterCollectItem_t2443332196 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Item::OnEnable()
extern "C"  void Item_OnEnable_m3832539774 (Item_t2953980098 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Item_OnEnable_m3832539774_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t434523843 * L_0 = Component_GetComponent_TisAnimator_t434523843_m2351447238(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t434523843_m2351447238_RuntimeMethod_var);
		__this->set__animator_4(L_0);
		return;
	}
}
// System.Void Item::OnBecameInvisible()
extern "C"  void Item_OnBecameInvisible_m2341802954 (Item_t2953980098 * __this, const RuntimeMethod* method)
{
	{
		Animator_t434523843 * L_0 = __this->get__animator_4();
		int32_t L_1 = __this->get__hashNormalize_3();
		Animator_SetTrigger_m332916954(L_0, L_1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_2, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Item::OnCollected(Item/AfterCollectItem)
extern "C"  void Item_OnCollected_m2474561728 (Item_t2953980098 * __this, AfterCollectItem_t2443332196 * ___onAfterCollectItem0, const RuntimeMethod* method)
{
	{
		AfterCollectItem_t2443332196 * L_0 = ___onAfterCollectItem0;
		__this->set__onAfterCollectItem_6(L_0);
		Animator_t434523843 * L_1 = __this->get__animator_4();
		int32_t L_2 = __this->get__hashCollect_2();
		Animator_SetTrigger_m332916954(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Item::AfterCollected()
extern "C"  void Item_AfterCollected_m3245101488 (Item_t2953980098 * __this, const RuntimeMethod* method)
{
	{
		AfterCollectItem_t2443332196 * L_0 = __this->get__onAfterCollectItem_6();
		int32_t L_1 = __this->get__value_5();
		AfterCollectItem_Invoke_m1527972829(L_0, L_1, /*hidden argument*/NULL);
		__this->set__onAfterCollectItem_6((AfterCollectItem_t2443332196 *)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_AfterCollectItem_t2443332196 (AfterCollectItem_t2443332196 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___value0);

}
// System.Void Item/AfterCollectItem::.ctor(System.Object,System.IntPtr)
extern "C"  void AfterCollectItem__ctor_m607793936 (AfterCollectItem_t2443332196 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Item/AfterCollectItem::Invoke(System.Int32)
extern "C"  void AfterCollectItem_Invoke_m1527972829 (AfterCollectItem_t2443332196 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		AfterCollectItem_Invoke_m1527972829((AfterCollectItem_t2443332196 *)__this->get_prev_9(), ___value0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, ___value0, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___value0, targetMethod);
		}
	}
	else
	{
		{
			// closed
			typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___value0, targetMethod);
		}
	}
}
// System.IAsyncResult Item/AfterCollectItem::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* AfterCollectItem_BeginInvoke_m2205001511 (AfterCollectItem_t2443332196 * __this, int32_t ___value0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AfterCollectItem_BeginInvoke_m2205001511_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___value0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Item/AfterCollectItem::EndInvoke(System.IAsyncResult)
extern "C"  void AfterCollectItem_EndInvoke_m1623628198 (AfterCollectItem_t2443332196 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.IEnumerator Leaderboard::UploadHighscore(System.String,System.Int32)
extern "C"  RuntimeObject* Leaderboard_UploadHighscore_m3473756086 (RuntimeObject * __this /* static, unused */, String_t* ___username0, int32_t ___score1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Leaderboard_UploadHighscore_m3473756086_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CUploadHighscoreU3Ec__Iterator0_t1095784518 * V_0 = NULL;
	{
		U3CUploadHighscoreU3Ec__Iterator0_t1095784518 * L_0 = (U3CUploadHighscoreU3Ec__Iterator0_t1095784518 *)il2cpp_codegen_object_new(U3CUploadHighscoreU3Ec__Iterator0_t1095784518_il2cpp_TypeInfo_var);
		U3CUploadHighscoreU3Ec__Iterator0__ctor_m1427742591(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CUploadHighscoreU3Ec__Iterator0_t1095784518 * L_1 = V_0;
		String_t* L_2 = ___username0;
		L_1->set_username_0(L_2);
		U3CUploadHighscoreU3Ec__Iterator0_t1095784518 * L_3 = V_0;
		int32_t L_4 = ___score1;
		L_3->set_score_1(L_4);
		U3CUploadHighscoreU3Ec__Iterator0_t1095784518 * L_5 = V_0;
		return L_5;
	}
}
// System.Collections.IEnumerator Leaderboard::DownloadHighscore(Leaderboard/AfterDownloadHighscore)
extern "C"  RuntimeObject* Leaderboard_DownloadHighscore_m2353152059 (RuntimeObject * __this /* static, unused */, AfterDownloadHighscore_t1806836570 * ___onAfterDownloadHighscore0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Leaderboard_DownloadHighscore_m2353152059_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CDownloadHighscoreU3Ec__Iterator1_t1659249822 * V_0 = NULL;
	{
		U3CDownloadHighscoreU3Ec__Iterator1_t1659249822 * L_0 = (U3CDownloadHighscoreU3Ec__Iterator1_t1659249822 *)il2cpp_codegen_object_new(U3CDownloadHighscoreU3Ec__Iterator1_t1659249822_il2cpp_TypeInfo_var);
		U3CDownloadHighscoreU3Ec__Iterator1__ctor_m523033430(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDownloadHighscoreU3Ec__Iterator1_t1659249822 * L_1 = V_0;
		AfterDownloadHighscore_t1806836570 * L_2 = ___onAfterDownloadHighscore0;
		L_1->set_onAfterDownloadHighscore_1(L_2);
		U3CDownloadHighscoreU3Ec__Iterator1_t1659249822 * L_3 = V_0;
		return L_3;
	}
}
// Highscore[] Leaderboard::FormatHighscore(System.String)
extern "C"  HighscoreU5BU5D_t1440391776* Leaderboard_FormatHighscore_m560532354 (RuntimeObject * __this /* static, unused */, String_t* ___textStream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Leaderboard_FormatHighscore_m560532354_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t1281789340* V_0 = NULL;
	HighscoreU5BU5D_t1440391776* V_1 = NULL;
	int32_t V_2 = 0;
	StringU5BU5D_t1281789340* V_3 = NULL;
	String_t* V_4 = NULL;
	int32_t V_5 = 0;
	DateTime_t3738529785  V_6;
	memset(&V_6, 0, sizeof(V_6));
	{
		String_t* L_0 = ___textStream0;
		CharU5BU5D_t3528271667* L_1 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)10));
		StringU5BU5D_t1281789340* L_2 = String_Split_m1466646415(L_0, L_1, 1, /*hidden argument*/NULL);
		V_0 = L_2;
		StringU5BU5D_t1281789340* L_3 = V_0;
		V_1 = ((HighscoreU5BU5D_t1440391776*)SZArrayNew(HighscoreU5BU5D_t1440391776_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))))));
		V_2 = 0;
		goto IL_0063;
	}

IL_0023:
	{
		StringU5BU5D_t1281789340* L_4 = V_0;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		String_t* L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		CharU5BU5D_t3528271667* L_8 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)124));
		StringU5BU5D_t1281789340* L_9 = String_Split_m1466646415(L_7, L_8, 1, /*hidden argument*/NULL);
		V_3 = L_9;
		StringU5BU5D_t1281789340* L_10 = V_3;
		int32_t L_11 = 0;
		String_t* L_12 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_4 = L_12;
		StringU5BU5D_t1281789340* L_13 = V_3;
		int32_t L_14 = 1;
		String_t* L_15 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		int32_t L_16 = Int32_Parse_m1033611559(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		V_5 = L_16;
		StringU5BU5D_t1281789340* L_17 = V_3;
		int32_t L_18 = 3;
		String_t* L_19 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_20 = DateTime_Parse_m2550724587(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		V_6 = L_20;
		HighscoreU5BU5D_t1440391776* L_21 = V_1;
		int32_t L_22 = V_2;
		String_t* L_23 = V_4;
		int32_t L_24 = V_5;
		DateTime_t3738529785  L_25 = V_6;
		Highscore_t1172667341 * L_26 = (Highscore_t1172667341 *)il2cpp_codegen_object_new(Highscore_t1172667341_il2cpp_TypeInfo_var);
		Highscore__ctor_m1880064685(L_26, L_23, L_24, L_25, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_21, L_26);
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22), (Highscore_t1172667341 *)L_26);
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0063:
	{
		int32_t L_28 = V_2;
		StringU5BU5D_t1281789340* L_29 = V_0;
		if ((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_29)->max_length)))))))
		{
			goto IL_0023;
		}
	}
	{
		HighscoreU5BU5D_t1440391776* L_30 = V_1;
		return L_30;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Leaderboard/<DownloadHighscore>c__Iterator1::.ctor()
extern "C"  void U3CDownloadHighscoreU3Ec__Iterator1__ctor_m523033430 (U3CDownloadHighscoreU3Ec__Iterator1_t1659249822 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Leaderboard/<DownloadHighscore>c__Iterator1::MoveNext()
extern "C"  bool U3CDownloadHighscoreU3Ec__Iterator1_MoveNext_m3174277851 (U3CDownloadHighscoreU3Ec__Iterator1_t1659249822 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDownloadHighscoreU3Ec__Iterator1_MoveNext_m3174277851_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	HighscoreU5BU5D_t1440391776* V_1 = NULL;
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0060;
			}
		}
	}
	{
		goto IL_00da;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral392048417, _stringLiteral2444971981, _stringLiteral459461992, /*hidden argument*/NULL);
		WWW_t3688466362 * L_3 = (WWW_t3688466362 *)il2cpp_codegen_object_new(WWW_t3688466362_il2cpp_TypeInfo_var);
		WWW__ctor_m2915079343(L_3, L_2, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E__0_0(L_3);
		WWW_t3688466362 * L_4 = __this->get_U3CwwwU3E__0_0();
		__this->set_U24current_2(L_4);
		bool L_5 = __this->get_U24disposing_3();
		if (L_5)
		{
			goto IL_005b;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_005b:
	{
		goto IL_00dc;
	}

IL_0060:
	{
		WWW_t3688466362 * L_6 = __this->get_U3CwwwU3E__0_0();
		String_t* L_7 = WWW_get_error_m3055313367(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00b5;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_9 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		WWW_t3688466362 * L_10 = __this->get_U3CwwwU3E__0_0();
		String_t* L_11 = WWW_get_text_m898164367(L_10, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_11);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogFormat_m309087137(NULL /*static, unused*/, _stringLiteral2016357093, L_9, /*hidden argument*/NULL);
		WWW_t3688466362 * L_12 = __this->get_U3CwwwU3E__0_0();
		String_t* L_13 = WWW_get_text_m898164367(L_12, /*hidden argument*/NULL);
		HighscoreU5BU5D_t1440391776* L_14 = Leaderboard_FormatHighscore_m560532354(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		AfterDownloadHighscore_t1806836570 * L_15 = __this->get_onAfterDownloadHighscore_1();
		HighscoreU5BU5D_t1440391776* L_16 = V_1;
		AfterDownloadHighscore_Invoke_m938133247(L_15, L_16, /*hidden argument*/NULL);
		goto IL_00d3;
	}

IL_00b5:
	{
		ObjectU5BU5D_t2843939325* L_17 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		WWW_t3688466362 * L_18 = __this->get_U3CwwwU3E__0_0();
		String_t* L_19 = WWW_get_error_m3055313367(L_18, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_19);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_m2535776735(NULL /*static, unused*/, _stringLiteral2133928915, L_17, /*hidden argument*/NULL);
	}

IL_00d3:
	{
		__this->set_U24PC_4((-1));
	}

IL_00da:
	{
		return (bool)0;
	}

IL_00dc:
	{
		return (bool)1;
	}
}
// System.Object Leaderboard/<DownloadHighscore>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CDownloadHighscoreU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2051432559 (U3CDownloadHighscoreU3Ec__Iterator1_t1659249822 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object Leaderboard/<DownloadHighscore>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CDownloadHighscoreU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m2761323990 (U3CDownloadHighscoreU3Ec__Iterator1_t1659249822 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void Leaderboard/<DownloadHighscore>c__Iterator1::Dispose()
extern "C"  void U3CDownloadHighscoreU3Ec__Iterator1_Dispose_m3695687489 (U3CDownloadHighscoreU3Ec__Iterator1_t1659249822 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void Leaderboard/<DownloadHighscore>c__Iterator1::Reset()
extern "C"  void U3CDownloadHighscoreU3Ec__Iterator1_Reset_m1270991718 (U3CDownloadHighscoreU3Ec__Iterator1_t1659249822 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDownloadHighscoreU3Ec__Iterator1_Reset_m1270991718_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Leaderboard/<UploadHighscore>c__Iterator0::.ctor()
extern "C"  void U3CUploadHighscoreU3Ec__Iterator0__ctor_m1427742591 (U3CUploadHighscoreU3Ec__Iterator0_t1095784518 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Leaderboard/<UploadHighscore>c__Iterator0::MoveNext()
extern "C"  bool U3CUploadHighscoreU3Ec__Iterator0_MoveNext_m462825594 (U3CUploadHighscoreU3Ec__Iterator0_t1095784518 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CUploadHighscoreU3Ec__Iterator0_MoveNext_m462825594_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0088;
			}
		}
	}
	{
		goto IL_00c2;
	}

IL_0021:
	{
		ObjectU5BU5D_t2843939325* L_2 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		ArrayElementTypeCheck (L_2, _stringLiteral2444971981);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral2444971981);
		ObjectU5BU5D_t2843939325* L_3 = L_2;
		ArrayElementTypeCheck (L_3, _stringLiteral3242380723);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral3242380723);
		ObjectU5BU5D_t2843939325* L_4 = L_3;
		String_t* L_5 = __this->get_username_0();
		String_t* L_6 = WWW_EscapeURL_m4251687403(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_6);
		ObjectU5BU5D_t2843939325* L_7 = L_4;
		int32_t L_8 = __this->get_score_1();
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Format_m630303134(NULL /*static, unused*/, _stringLiteral2867824504, L_7, /*hidden argument*/NULL);
		WWW_t3688466362 * L_12 = (WWW_t3688466362 *)il2cpp_codegen_object_new(WWW_t3688466362_il2cpp_TypeInfo_var);
		WWW__ctor_m2915079343(L_12, L_11, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E__0_2(L_12);
		WWW_t3688466362 * L_13 = __this->get_U3CwwwU3E__0_2();
		__this->set_U24current_3(L_13);
		bool L_14 = __this->get_U24disposing_4();
		if (L_14)
		{
			goto IL_0083;
		}
	}
	{
		__this->set_U24PC_5(1);
	}

IL_0083:
	{
		goto IL_00c4;
	}

IL_0088:
	{
		WWW_t3688466362 * L_15 = __this->get_U3CwwwU3E__0_2();
		String_t* L_16 = WWW_get_error_m3055313367(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_17 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_00bb;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_18 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		WWW_t3688466362 * L_19 = __this->get_U3CwwwU3E__0_2();
		String_t* L_20 = WWW_get_error_m3055313367(L_19, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_18, L_20);
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_20);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_m2535776735(NULL /*static, unused*/, _stringLiteral4178270268, L_18, /*hidden argument*/NULL);
	}

IL_00bb:
	{
		__this->set_U24PC_5((-1));
	}

IL_00c2:
	{
		return (bool)0;
	}

IL_00c4:
	{
		return (bool)1;
	}
}
// System.Object Leaderboard/<UploadHighscore>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CUploadHighscoreU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m994462778 (U3CUploadHighscoreU3Ec__Iterator0_t1095784518 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Object Leaderboard/<UploadHighscore>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CUploadHighscoreU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m1791494651 (U3CUploadHighscoreU3Ec__Iterator0_t1095784518 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Void Leaderboard/<UploadHighscore>c__Iterator0::Dispose()
extern "C"  void U3CUploadHighscoreU3Ec__Iterator0_Dispose_m2531324679 (U3CUploadHighscoreU3Ec__Iterator0_t1095784518 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void Leaderboard/<UploadHighscore>c__Iterator0::Reset()
extern "C"  void U3CUploadHighscoreU3Ec__Iterator0_Reset_m2913688499 (U3CUploadHighscoreU3Ec__Iterator0_t1095784518 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CUploadHighscoreU3Ec__Iterator0_Reset_m2913688499_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Leaderboard/AfterDownloadHighscore::.ctor(System.Object,System.IntPtr)
extern "C"  void AfterDownloadHighscore__ctor_m1227654092 (AfterDownloadHighscore_t1806836570 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Leaderboard/AfterDownloadHighscore::Invoke(Highscore[])
extern "C"  void AfterDownloadHighscore_Invoke_m938133247 (AfterDownloadHighscore_t1806836570 * __this, HighscoreU5BU5D_t1440391776* ___highscoreArray0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		AfterDownloadHighscore_Invoke_m938133247((AfterDownloadHighscore_t1806836570 *)__this->get_prev_9(), ___highscoreArray0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, HighscoreU5BU5D_t1440391776*, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, ___highscoreArray0, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, HighscoreU5BU5D_t1440391776*, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___highscoreArray0, targetMethod);
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			typedef void (*FunctionPointerType) (void*, HighscoreU5BU5D_t1440391776*, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___highscoreArray0, targetMethod);
		}
		else
		{
			// open
			typedef void (*FunctionPointerType) (HighscoreU5BU5D_t1440391776*, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(___highscoreArray0, targetMethod);
		}
	}
}
// System.IAsyncResult Leaderboard/AfterDownloadHighscore::BeginInvoke(Highscore[],System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* AfterDownloadHighscore_BeginInvoke_m3026563404 (AfterDownloadHighscore_t1806836570 * __this, HighscoreU5BU5D_t1440391776* ___highscoreArray0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___highscoreArray0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Leaderboard/AfterDownloadHighscore::EndInvoke(System.IAsyncResult)
extern "C"  void AfterDownloadHighscore_EndInvoke_m3672085496 (AfterDownloadHighscore_t1806836570 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LeaderboardDisplay::.ctor()
extern "C"  void LeaderboardDisplay__ctor_m344739263 (LeaderboardDisplay_t2498610109 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LeaderboardDisplay::Start()
extern "C"  void LeaderboardDisplay_Start_m2035372283 (LeaderboardDisplay_t2498610109 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LeaderboardDisplay_Start_m2035372283_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t1901882714 * L_0 = __this->get__leaderboardText_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral2314441365);
		intptr_t L_1 = (intptr_t)LeaderboardDisplay_OnHighscoresDownloaded_m346300552_RuntimeMethod_var;
		AfterDownloadHighscore_t1806836570 * L_2 = (AfterDownloadHighscore_t1806836570 *)il2cpp_codegen_object_new(AfterDownloadHighscore_t1806836570_il2cpp_TypeInfo_var);
		AfterDownloadHighscore__ctor_m1227654092(L_2, __this, L_1, /*hidden argument*/NULL);
		RuntimeObject* L_3 = Leaderboard_DownloadHighscore_m2353152059(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LeaderboardDisplay::OnHighscoresDownloaded(Highscore[])
extern "C"  void LeaderboardDisplay_OnHighscoresDownloaded_m346300552 (LeaderboardDisplay_t2498610109 * __this, HighscoreU5BU5D_t1440391776* ___highscoreArray0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LeaderboardDisplay_OnHighscoresDownloaded_m346300552_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	HighscoreU5BU5D_t1440391776* G_B2_0 = NULL;
	HighscoreU5BU5D_t1440391776* G_B1_0 = NULL;
	{
		HighscoreU5BU5D_t1440391776* L_0 = ___highscoreArray0;
		Func_2_t914422414 * L_1 = ((LeaderboardDisplay_t2498610109_StaticFields*)il2cpp_codegen_static_fields_for(LeaderboardDisplay_t2498610109_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_3();
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0019;
		}
	}
	{
		intptr_t L_2 = (intptr_t)LeaderboardDisplay_U3COnHighscoresDownloadedU3Em__0_m1896792150_RuntimeMethod_var;
		Func_2_t914422414 * L_3 = (Func_2_t914422414 *)il2cpp_codegen_object_new(Func_2_t914422414_il2cpp_TypeInfo_var);
		Func_2__ctor_m4218885744(L_3, NULL, L_2, /*hidden argument*/Func_2__ctor_m4218885744_RuntimeMethod_var);
		((LeaderboardDisplay_t2498610109_StaticFields*)il2cpp_codegen_static_fields_for(LeaderboardDisplay_t2498610109_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_3(L_3);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		Func_2_t914422414 * L_4 = ((LeaderboardDisplay_t2498610109_StaticFields*)il2cpp_codegen_static_fields_for(LeaderboardDisplay_t2498610109_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_3();
		RuntimeObject* L_5 = Enumerable_OrderByDescending_TisHighscore_t1172667341_TisInt32_t2950945753_m1663012717(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)G_B2_0, L_4, /*hidden argument*/Enumerable_OrderByDescending_TisHighscore_t1172667341_TisInt32_t2950945753_m1663012717_RuntimeMethod_var);
		HighscoreU5BU5D_t1440391776* L_6 = Enumerable_ToArray_TisHighscore_t1172667341_m1651663599(NULL /*static, unused*/, L_5, /*hidden argument*/Enumerable_ToArray_TisHighscore_t1172667341_m1651663599_RuntimeMethod_var);
		___highscoreArray0 = L_6;
		StringBuilder_t * L_7 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_7, /*hidden argument*/NULL);
		V_0 = L_7;
		V_1 = 0;
		goto IL_0057;
	}

IL_0037:
	{
		StringBuilder_t * L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		RuntimeObject * L_11 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_10);
		HighscoreU5BU5D_t1440391776* L_12 = ___highscoreArray0;
		int32_t L_13 = V_1;
		int32_t L_14 = L_13;
		Highscore_t1172667341 * L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		String_t* L_16 = Highscore_get_Text_m4237754476(L_15, /*hidden argument*/NULL);
		StringBuilder_AppendFormat_m3255666490(L_8, _stringLiteral3441831098, L_11, L_16, /*hidden argument*/NULL);
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0057:
	{
		int32_t L_18 = V_1;
		HighscoreU5BU5D_t1440391776* L_19 = ___highscoreArray0;
		if ((((int32_t)L_18) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_19)->max_length)))))))
		{
			goto IL_0037;
		}
	}
	{
		Text_t1901882714 * L_20 = __this->get__leaderboardText_2();
		StringBuilder_t * L_21 = V_0;
		String_t* L_22 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, L_22);
		return;
	}
}
// System.Int32 LeaderboardDisplay::<OnHighscoresDownloaded>m__0(Highscore)
extern "C"  int32_t LeaderboardDisplay_U3COnHighscoresDownloadedU3Em__0_m1896792150 (RuntimeObject * __this /* static, unused */, Highscore_t1172667341 * ___o0, const RuntimeMethod* method)
{
	{
		Highscore_t1172667341 * L_0 = ___o0;
		int32_t L_1 = Highscore_get_Score_m2521617566(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Menu::.ctor()
extern "C"  void Menu__ctor_m1825074274 (Menu_t2559899777 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Menu::Start()
extern "C"  void Menu_Start_m3708307636 (Menu_t2559899777 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Menu_Start_m3708307636_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InputField_t3762917431 * L_0 = __this->get__playerNameInputField_2();
		SubmitEvent_t648412432 * L_1 = InputField_get_onEndEdit_m3015534368(L_0, /*hidden argument*/NULL);
		intptr_t L_2 = (intptr_t)Menu_OnEditInput_m2408215939_RuntimeMethod_var;
		UnityAction_1_t2432286830 * L_3 = (UnityAction_1_t2432286830 *)il2cpp_codegen_object_new(UnityAction_1_t2432286830_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m1742195854(L_3, __this, L_2, /*hidden argument*/UnityAction_1__ctor_m1742195854_RuntimeMethod_var);
		UnityEvent_1_AddListener_m2268272923(L_1, L_3, /*hidden argument*/UnityEvent_1_AddListener_m2268272923_RuntimeMethod_var);
		Button_t4055032469 * L_4 = __this->get__playButton_3();
		ButtonClickedEvent_t48803504 * L_5 = Button_get_onClick_m2332132945(L_4, /*hidden argument*/NULL);
		intptr_t L_6 = (intptr_t)Menu_OnStartGame_m1558067714_RuntimeMethod_var;
		UnityAction_t3245792599 * L_7 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
		UnityAction__ctor_m772160306(L_7, __this, L_6, /*hidden argument*/NULL);
		UnityEvent_AddListener_m2276267359(L_5, L_7, /*hidden argument*/NULL);
		Button_t4055032469 * L_8 = __this->get__playButton_3();
		Selectable_set_interactable_m3105888815(L_8, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Menu::OnEditInput(System.String)
extern "C"  void Menu_OnEditInput_m2408215939 (Menu_t2559899777 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	{
		Button_t4055032469 * L_0 = __this->get__playButton_3();
		String_t* L_1 = ___text0;
		int32_t L_2 = String_get_Length_m3847582255(L_1, /*hidden argument*/NULL);
		Selectable_set_interactable_m3105888815(L_0, (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Menu::OnStartGame()
extern "C"  void Menu_OnStartGame_m1558067714 (Menu_t2559899777 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Menu_OnStartGame_m1558067714_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InputField_t3762917431 * L_0 = __this->get__playerNameInputField_2();
		String_t* L_1 = InputField_get_text_m3534748202(L_0, /*hidden argument*/NULL);
		PlayerLog_SetName_m317683739(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral62725266, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Obstacle::.ctor()
extern "C"  void Obstacle__ctor_m1962423779 (Obstacle_t162511623 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Obstacle::OnBecameInvisible()
extern "C"  void Obstacle_OnBecameInvisible_m262837662 (Obstacle_t162511623 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ObstacleBlock::.ctor()
extern "C"  void ObstacleBlock__ctor_m2782658423 (ObstacleBlock_t2281421392 * __this, const RuntimeMethod* method)
{
	{
		Obstacle__ctor_m1962423779(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ObstacleFly::.ctor()
extern "C"  void ObstacleFly__ctor_m643661644 (ObstacleFly_t1336261845 * __this, const RuntimeMethod* method)
{
	{
		Obstacle__ctor_m1962423779(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ObstacleFly::OnEnable()
extern "C"  void ObstacleFly_OnEnable_m2089538391 (ObstacleFly_t1336261845 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObstacleFly_OnEnable_m2089538391_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		__this->set__transform_2(L_0);
		Transform_t3600365921 * L_1 = __this->get__transform_2();
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_3 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->set__startPosition_3(L_3);
		Vector2_t2156229523 * L_4 = __this->get_address_of__startPosition_3();
		Vector2_t2156229523 * L_5 = L_4;
		float L_6 = L_5->get_y_1();
		float L_7 = __this->get__maxSpeed_4();
		L_5->set_y_1(((float)il2cpp_codegen_add((float)L_6, (float)((float)((float)L_7/(float)(2.0f))))));
		return;
	}
}
// System.Void ObstacleFly::Update()
extern "C"  void ObstacleFly_Update_m2526408389 (ObstacleFly_t1336261845 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObstacleFly_Update_m2526408389_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Transform_t3600365921 * L_0 = __this->get__transform_2();
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_x_1();
		Vector2_t2156229523 * L_4 = __this->get_address_of__startPosition_3();
		float L_5 = L_4->get_y_1();
		float L_6 = __this->get__maxSpeed_4();
		float L_7 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_8 = sinf(((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)));
		Transform_t3600365921 * L_9 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_10 = Transform_get_position_m36019626(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		float L_11 = (&V_1)->get_z_3();
		Vector3_t3722313464  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Vector3__ctor_m3353183577((&L_12), L_3, ((float)il2cpp_codegen_add((float)L_5, (float)L_8)), L_11, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_0, L_12, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ObstacleSnail::.ctor()
extern "C"  void ObstacleSnail__ctor_m346349380 (ObstacleSnail_t3862460316 * __this, const RuntimeMethod* method)
{
	{
		Obstacle__ctor_m1962423779(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ParallaxSystem::.ctor()
extern "C"  void ParallaxSystem__ctor_m2356497701 (ParallaxSystem_t3373904545 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Transform ParallaxSystem::get_Transform()
extern "C"  Transform_t3600365921 * ParallaxSystem_get_Transform_m3267892859 (ParallaxSystem_t3373904545 * __this, const RuntimeMethod* method)
{
	{
		Transform_t3600365921 * L_0 = __this->get__transform_3();
		return L_0;
	}
}
// System.Void ParallaxSystem::Start()
extern "C"  void ParallaxSystem_Start_m1724912213 (ParallaxSystem_t3373904545 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParallaxSystem_Start_m1724912213_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_t3600365921 * V_1 = NULL;
	SpriteRenderer_t3235626157 * V_2 = NULL;
	ParallaxItem_t3160709805 * V_3 = NULL;
	List_1_t337817251 * G_B8_0 = NULL;
	ParallaxSystem_t3373904545 * G_B8_1 = NULL;
	List_1_t337817251 * G_B7_0 = NULL;
	ParallaxSystem_t3373904545 * G_B7_1 = NULL;
	{
		Camera_t4157153871 * L_0 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set__mainCamera_2(L_0);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		__this->set__transform_3(L_1);
		bool L_2 = __this->get__isLooping_7();
		if (!L_2)
		{
			goto IL_00bb;
		}
	}
	{
		List_1_t337817251 * L_3 = (List_1_t337817251 *)il2cpp_codegen_object_new(List_1_t337817251_il2cpp_TypeInfo_var);
		List_1__ctor_m2420326261(L_3, /*hidden argument*/List_1__ctor_m2420326261_RuntimeMethod_var);
		__this->set__items_4(L_3);
		V_0 = 0;
		goto IL_0077;
	}

IL_0034:
	{
		Transform_t3600365921 * L_4 = __this->get__transform_3();
		int32_t L_5 = V_0;
		Transform_t3600365921 * L_6 = Transform_GetChild_m1092972975(L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		Transform_t3600365921 * L_7 = V_1;
		SpriteRenderer_t3235626157 * L_8 = Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(L_7, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var);
		V_2 = L_8;
		SpriteRenderer_t3235626157 * L_9 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0073;
		}
	}
	{
		List_1_t337817251 * L_11 = __this->get__items_4();
		ParallaxItem_t3160709805 * L_12 = (ParallaxItem_t3160709805 *)il2cpp_codegen_object_new(ParallaxItem_t3160709805_il2cpp_TypeInfo_var);
		ParallaxItem__ctor_m1622181518(L_12, /*hidden argument*/NULL);
		V_3 = L_12;
		ParallaxItem_t3160709805 * L_13 = V_3;
		Transform_t3600365921 * L_14 = V_1;
		L_13->set_Transform_0(L_14);
		ParallaxItem_t3160709805 * L_15 = V_3;
		SpriteRenderer_t3235626157 * L_16 = V_2;
		L_15->set_Renderer_1(L_16);
		ParallaxItem_t3160709805 * L_17 = V_3;
		List_1_Add_m572897839(L_11, L_17, /*hidden argument*/List_1_Add_m572897839_RuntimeMethod_var);
	}

IL_0073:
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0077:
	{
		int32_t L_19 = V_0;
		Transform_t3600365921 * L_20 = __this->get__transform_3();
		int32_t L_21 = Transform_get_childCount_m3145433196(L_20, /*hidden argument*/NULL);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0034;
		}
	}
	{
		List_1_t337817251 * L_22 = __this->get__items_4();
		Func_2_t1357832619 * L_23 = ((ParallaxSystem_t3373904545_StaticFields*)il2cpp_codegen_static_fields_for(ParallaxSystem_t3373904545_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_8();
		G_B7_0 = L_22;
		G_B7_1 = __this;
		if (L_23)
		{
			G_B8_0 = L_22;
			G_B8_1 = __this;
			goto IL_00a7;
		}
	}
	{
		intptr_t L_24 = (intptr_t)ParallaxSystem_U3CStartU3Em__0_m1840493113_RuntimeMethod_var;
		Func_2_t1357832619 * L_25 = (Func_2_t1357832619 *)il2cpp_codegen_object_new(Func_2_t1357832619_il2cpp_TypeInfo_var);
		Func_2__ctor_m911400943(L_25, NULL, L_24, /*hidden argument*/Func_2__ctor_m911400943_RuntimeMethod_var);
		((ParallaxSystem_t3373904545_StaticFields*)il2cpp_codegen_static_fields_for(ParallaxSystem_t3373904545_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_8(L_25);
		G_B8_0 = G_B7_0;
		G_B8_1 = G_B7_1;
	}

IL_00a7:
	{
		Func_2_t1357832619 * L_26 = ((ParallaxSystem_t3373904545_StaticFields*)il2cpp_codegen_static_fields_for(ParallaxSystem_t3373904545_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_8();
		RuntimeObject* L_27 = Enumerable_OrderBy_TisParallaxItem_t3160709805_TisSingle_t1397266774_m2471274649(NULL /*static, unused*/, G_B8_0, L_26, /*hidden argument*/Enumerable_OrderBy_TisParallaxItem_t3160709805_TisSingle_t1397266774_m2471274649_RuntimeMethod_var);
		List_1_t337817251 * L_28 = Enumerable_ToList_TisParallaxItem_t3160709805_m3296214996(NULL /*static, unused*/, L_27, /*hidden argument*/Enumerable_ToList_TisParallaxItem_t3160709805_m3296214996_RuntimeMethod_var);
		G_B8_1->set__items_4(L_28);
	}

IL_00bb:
	{
		return;
	}
}
// System.Void ParallaxSystem::Update()
extern "C"  void ParallaxSystem_Update_m1416710401 (ParallaxSystem_t3373904545 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ParallaxSystem_Update_m1416710401_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	ParallaxItem_t3160709805 * V_1 = NULL;
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	ParallaxItem_t3160709805 * V_4 = NULL;
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Bounds_t2266837910  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Bounds_t2266837910  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Vector3_t3722313464  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Vector3_t3722313464  V_10;
	memset(&V_10, 0, sizeof(V_10));
	{
		Vector2_t2156229523 * L_0 = __this->get_address_of__speed_5();
		float L_1 = L_0->get_x_0();
		Vector2_t2156229523 * L_2 = __this->get_address_of__direction_6();
		float L_3 = L_2->get_x_0();
		Vector2_t2156229523 * L_4 = __this->get_address_of__speed_5();
		float L_5 = L_4->get_y_1();
		Vector2_t2156229523 * L_6 = __this->get_address_of__direction_6();
		float L_7 = L_6->get_y_1();
		Vector2__ctor_m3970636864((&V_0), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), ((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		Vector2_t2156229523  L_8 = V_0;
		float L_9 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_10 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		Transform_t3600365921 * L_11 = __this->get__transform_3();
		Vector2_t2156229523  L_12 = V_0;
		Vector3_t3722313464  L_13 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		Transform_Translate_m1810197270(L_11, L_13, /*hidden argument*/NULL);
		bool L_14 = __this->get__isLooping_7();
		if (!L_14)
		{
			goto IL_015b;
		}
	}
	{
		List_1_t337817251 * L_15 = __this->get__items_4();
		ParallaxItem_t3160709805 * L_16 = Enumerable_FirstOrDefault_TisParallaxItem_t3160709805_m938612081(NULL /*static, unused*/, L_15, /*hidden argument*/Enumerable_FirstOrDefault_TisParallaxItem_t3160709805_m938612081_RuntimeMethod_var);
		V_1 = L_16;
		ParallaxItem_t3160709805 * L_17 = V_1;
		if (!L_17)
		{
			goto IL_015b;
		}
	}
	{
		ParallaxItem_t3160709805 * L_18 = V_1;
		Transform_t3600365921 * L_19 = L_18->get_Transform_0();
		Vector3_t3722313464  L_20 = Transform_get_position_m36019626(L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		float L_21 = (&V_2)->get_x_1();
		Camera_t4157153871 * L_22 = __this->get__mainCamera_2();
		Transform_t3600365921 * L_23 = Component_get_transform_m3162698980(L_22, /*hidden argument*/NULL);
		Vector3_t3722313464  L_24 = Transform_get_position_m36019626(L_23, /*hidden argument*/NULL);
		V_3 = L_24;
		float L_25 = (&V_3)->get_x_1();
		if ((!(((float)L_21) < ((float)L_25))))
		{
			goto IL_015b;
		}
	}
	{
		ParallaxItem_t3160709805 * L_26 = V_1;
		SpriteRenderer_t3235626157 * L_27 = L_26->get_Renderer_1();
		bool L_28 = Renderer_get_isVisible_m78730451(L_27, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_015b;
		}
	}
	{
		List_1_t337817251 * L_29 = __this->get__items_4();
		ParallaxItem_t3160709805 * L_30 = Enumerable_LastOrDefault_TisParallaxItem_t3160709805_m4108382031(NULL /*static, unused*/, L_29, /*hidden argument*/Enumerable_LastOrDefault_TisParallaxItem_t3160709805_m4108382031_RuntimeMethod_var);
		V_4 = L_30;
		ParallaxItem_t3160709805 * L_31 = V_4;
		Transform_t3600365921 * L_32 = L_31->get_Transform_0();
		Vector3_t3722313464  L_33 = Transform_get_position_m36019626(L_32, /*hidden argument*/NULL);
		V_5 = L_33;
		ParallaxItem_t3160709805 * L_34 = V_4;
		SpriteRenderer_t3235626157 * L_35 = L_34->get_Renderer_1();
		Bounds_t2266837910  L_36 = Renderer_get_bounds_m1803204000(L_35, /*hidden argument*/NULL);
		V_7 = L_36;
		Vector3_t3722313464  L_37 = Bounds_get_max_m3756577669((&V_7), /*hidden argument*/NULL);
		ParallaxItem_t3160709805 * L_38 = V_4;
		SpriteRenderer_t3235626157 * L_39 = L_38->get_Renderer_1();
		Bounds_t2266837910  L_40 = Renderer_get_bounds_m1803204000(L_39, /*hidden argument*/NULL);
		V_8 = L_40;
		Vector3_t3722313464  L_41 = Bounds_get_min_m3755135869((&V_8), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_42 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_37, L_41, /*hidden argument*/NULL);
		V_6 = L_42;
		ParallaxItem_t3160709805 * L_43 = V_1;
		Transform_t3600365921 * L_44 = L_43->get_Transform_0();
		float L_45 = (&V_5)->get_x_1();
		float L_46 = (&V_6)->get_x_1();
		ParallaxItem_t3160709805 * L_47 = V_1;
		Transform_t3600365921 * L_48 = L_47->get_Transform_0();
		Vector3_t3722313464  L_49 = Transform_get_position_m36019626(L_48, /*hidden argument*/NULL);
		V_9 = L_49;
		float L_50 = (&V_9)->get_y_2();
		ParallaxItem_t3160709805 * L_51 = V_1;
		Transform_t3600365921 * L_52 = L_51->get_Transform_0();
		Vector3_t3722313464  L_53 = Transform_get_position_m36019626(L_52, /*hidden argument*/NULL);
		V_10 = L_53;
		float L_54 = (&V_10)->get_z_3();
		Vector3_t3722313464  L_55;
		memset(&L_55, 0, sizeof(L_55));
		Vector3__ctor_m3353183577((&L_55), ((float)il2cpp_codegen_add((float)L_45, (float)L_46)), L_50, L_54, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_44, L_55, /*hidden argument*/NULL);
		List_1_t337817251 * L_56 = __this->get__items_4();
		ParallaxItem_t3160709805 * L_57 = V_1;
		List_1_Remove_m3933805465(L_56, L_57, /*hidden argument*/List_1_Remove_m3933805465_RuntimeMethod_var);
		List_1_t337817251 * L_58 = __this->get__items_4();
		ParallaxItem_t3160709805 * L_59 = V_1;
		List_1_Add_m572897839(L_58, L_59, /*hidden argument*/List_1_Add_m572897839_RuntimeMethod_var);
	}

IL_015b:
	{
		return;
	}
}
// System.Single ParallaxSystem::<Start>m__0(ParallaxSystem/ParallaxItem)
extern "C"  float ParallaxSystem_U3CStartU3Em__0_m1840493113 (RuntimeObject * __this /* static, unused */, ParallaxItem_t3160709805 * ___t0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		ParallaxItem_t3160709805 * L_0 = ___t0;
		Transform_t3600365921 * L_1 = L_0->get_Transform_0();
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_x_1();
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ParallaxSystem/ParallaxItem::.ctor()
extern "C"  void ParallaxItem__ctor_m1622181518 (ParallaxItem_t3160709805 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerController::.ctor()
extern "C"  void PlayerController__ctor_m1333951952 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Start()
extern "C"  void PlayerController_Start_m1746698410 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Start_m1746698410_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioSource_t3935305588 * L_0 = Component_GetComponent_TisAudioSource_t3935305588_m1977431131(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t3935305588_m1977431131_RuntimeMethod_var);
		__this->set__audioSource_3(L_0);
		return;
	}
}
// System.Void PlayerController::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void PlayerController_OnCollisionEnter2D_m909387068 (PlayerController_t2064355688 * __this, Collision2D_t2842956331 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_OnCollisionEnter2D_m909387068_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collision2D_t2842956331 * L_0 = ___other0;
		GameObject_t1113636619 * L_1 = Collision2D_get_gameObject_m1443495885(L_0, /*hidden argument*/NULL);
		bool L_2 = GameObject_CompareTag_m3144439756(L_1, _stringLiteral3452654525, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		Collision2D_t2842956331 * L_3 = ___other0;
		GameObject_t1113636619 * L_4 = Collision2D_get_gameObject_m1443495885(L_3, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_4, (bool)0, /*hidden argument*/NULL);
		PlayerController_OnDeath_m2333206973(__this, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void PlayerController::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void PlayerController_OnTriggerEnter2D_m2562319700 (PlayerController_t2064355688 * __this, Collider2D_t2806799626 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_OnTriggerEnter2D_m2562319700_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Item_t2953980098 * V_0 = NULL;
	{
		Collider2D_t2806799626 * L_0 = ___other0;
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		bool L_2 = GameObject_CompareTag_m3144439756(L_1, _stringLiteral1949155704, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		Collider2D_t2806799626 * L_3 = ___other0;
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(L_3, /*hidden argument*/NULL);
		Item_t2953980098 * L_5 = GameObject_GetComponent_TisItem_t2953980098_m462103850(L_4, /*hidden argument*/GameObject_GetComponent_TisItem_t2953980098_m462103850_RuntimeMethod_var);
		V_0 = L_5;
		Item_t2953980098 * L_6 = V_0;
		intptr_t L_7 = (intptr_t)PlayerController_OnAfterCollected_m1657761958_RuntimeMethod_var;
		AfterCollectItem_t2443332196 * L_8 = (AfterCollectItem_t2443332196 *)il2cpp_codegen_object_new(AfterCollectItem_t2443332196_il2cpp_TypeInfo_var);
		AfterCollectItem__ctor_m607793936(L_8, __this, L_7, /*hidden argument*/NULL);
		Item_OnCollected_m2474561728(L_6, L_8, /*hidden argument*/NULL);
	}

IL_0033:
	{
		return;
	}
}
// System.Void PlayerController::OnAfterCollected(System.Int32)
extern "C"  void PlayerController_OnAfterCollected_m1657761958 (PlayerController_t2064355688 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		AudioSource_t3935305588 * L_0 = __this->get__audioSource_3();
		AudioClip_t3680889665 * L_1 = __this->get__collectItemClip_6();
		AudioSource_PlayOneShot_m1688286683(L_0, L_1, /*hidden argument*/NULL);
		int32_t L_2 = __this->get__collectedItems_4();
		int32_t L_3 = ___value0;
		__this->set__collectedItems_4(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)));
		UIManager_t1042050227 * L_4 = __this->get__uiManager_5();
		int32_t L_5 = __this->get__collectedItems_4();
		UIManager_UpdateCollectedItems_m3094805831(L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::OnDeath()
extern "C"  void PlayerController_OnDeath_m2333206973 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		AudioSource_t3935305588 * L_0 = __this->get__audioSource_3();
		AudioSource_Stop_m2682712816(L_0, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_1 = __this->get__audioSource_3();
		AudioClip_t3680889665 * L_2 = __this->get__gameoverClip_7();
		AudioSource_PlayOneShot_m1688286683(L_1, L_2, /*hidden argument*/NULL);
		UIManager_t1042050227 * L_3 = __this->get__uiManager_5();
		UIManager_OnGameOver_m921644786(L_3, /*hidden argument*/NULL);
		String_t* L_4 = PlayerLog_GetName_m2322447201(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = __this->get__collectedItems_4();
		V_1 = L_5;
		String_t* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = Leaderboard_UploadHighscore_m3473756086(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerLog::SetName(System.String)
extern "C"  void PlayerLog_SetName_m317683739 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerLog_SetName_m317683739_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		PlayerPrefs_SetString_m2101271233(NULL /*static, unused*/, _stringLiteral1873233563, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String PlayerLog::GetName()
extern "C"  String_t* PlayerLog_GetName_m2322447201 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerLog_GetName_m2322447201_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = PlayerPrefs_GetString_m389913383(NULL /*static, unused*/, _stringLiteral1873233563, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerMovement::.ctor()
extern "C"  void PlayerMovement__ctor_m3994561284 (PlayerMovement_t2731566919 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerMovement::Start()
extern "C"  void PlayerMovement_Start_m3025059540 (PlayerMovement_t2731566919 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerMovement_Start_m3025059540_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		__this->set__transform_2(L_0);
		Rigidbody2D_t939494601 * L_1 = Component_GetComponent_TisRigidbody2D_t939494601_m1531613439(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t939494601_m1531613439_RuntimeMethod_var);
		__this->set__rigidbody_3(L_1);
		return;
	}
}
// System.Void PlayerMovement::FixedUpdate()
extern "C"  void PlayerMovement_FixedUpdate_m2788581829 (PlayerMovement_t2731566919 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerMovement_FixedUpdate_m2788581829_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Transform_t3600365921 * L_0 = __this->get__transform_2();
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_2 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		Transform_t3600365921 * L_3 = __this->get__groundCheck_4();
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		Vector2_t2156229523  L_5 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		LayerMask_t3493934918  L_6 = __this->get__groundLayer_5();
		int32_t L_7 = LayerMask_op_Implicit_m3296792737(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1528932956_il2cpp_TypeInfo_var);
		RaycastHit2D_t2279581989  L_8 = Physics2D_Linecast_m2347689996(NULL /*static, unused*/, L_2, L_5, L_7, /*hidden argument*/NULL);
		bool L_9 = RaycastHit2D_op_Implicit_m653385179(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_10 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0063;
		}
	}
	{
		bool L_11 = V_0;
		if (!L_11)
		{
			goto IL_0063;
		}
	}
	{
		Rigidbody2D_t939494601 * L_12 = __this->get__rigidbody_3();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_13 = Vector2_get_up_m2647420593(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_14 = __this->get__jumpForce_6();
		Vector2_t2156229523  L_15 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m1113499586(L_12, L_15, /*hidden argument*/NULL);
	}

IL_0063:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Pooling::.ctor()
extern "C"  void Pooling__ctor_m2081866961 (Pooling_t2442357387 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pooling::Awake()
extern "C"  void Pooling_Awake_m3530310017 (Pooling_t2442357387 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Pooling_Awake_m3530310017_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Queue_1_t959896113 * V_1 = NULL;
	int32_t V_2 = 0;
	GameObject_t1113636619 * V_3 = NULL;
	{
		Dictionary_2_t745152412 * L_0 = (Dictionary_2_t745152412 *)il2cpp_codegen_object_new(Dictionary_2_t745152412_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3078442726(L_0, /*hidden argument*/Dictionary_2__ctor_m3078442726_RuntimeMethod_var);
		__this->set__dictionary_2(L_0);
		V_0 = 0;
		goto IL_007f;
	}

IL_0012:
	{
		Queue_1_t959896113 * L_1 = (Queue_1_t959896113 *)il2cpp_codegen_object_new(Queue_1_t959896113_il2cpp_TypeInfo_var);
		Queue_1__ctor_m3618464516(L_1, /*hidden argument*/Queue_1__ctor_m3618464516_RuntimeMethod_var);
		V_1 = L_1;
		V_2 = 0;
		goto IL_004f;
	}

IL_001f:
	{
		PoolingItemU5BU5D_t451468387* L_2 = __this->get__items_4();
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		PoolingItem_t2406737350 * L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		GameObject_t1113636619 * L_6 = L_5->get_Prefab_1();
		Transform_t3600365921 * L_7 = __this->get__parent_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_8 = Object_Instantiate_TisGameObject_t1113636619_m3215236302(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3215236302_RuntimeMethod_var);
		V_3 = L_8;
		GameObject_t1113636619 * L_9 = V_3;
		GameObject_t1113636619 * L_10 = GameObject_get_gameObject_m3693461266(L_9, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_10, (bool)0, /*hidden argument*/NULL);
		Queue_1_t959896113 * L_11 = V_1;
		GameObject_t1113636619 * L_12 = V_3;
		Queue_1_Enqueue_m2666802599(L_11, L_12, /*hidden argument*/Queue_1_Enqueue_m2666802599_RuntimeMethod_var);
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_004f:
	{
		int32_t L_14 = V_2;
		PoolingItemU5BU5D_t451468387* L_15 = __this->get__items_4();
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		PoolingItem_t2406737350 * L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		int32_t L_19 = L_18->get_Size_2();
		if ((((int32_t)L_14) < ((int32_t)L_19)))
		{
			goto IL_001f;
		}
	}
	{
		Dictionary_2_t745152412 * L_20 = __this->get__dictionary_2();
		PoolingItemU5BU5D_t451468387* L_21 = __this->get__items_4();
		int32_t L_22 = V_0;
		int32_t L_23 = L_22;
		PoolingItem_t2406737350 * L_24 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		String_t* L_25 = L_24->get_Tag_0();
		Queue_1_t959896113 * L_26 = V_1;
		Dictionary_2_Add_m1312697002(L_20, L_25, L_26, /*hidden argument*/Dictionary_2_Add_m1312697002_RuntimeMethod_var);
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_007f:
	{
		int32_t L_28 = V_0;
		PoolingItemU5BU5D_t451468387* L_29 = __this->get__items_4();
		if ((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_29)->max_length)))))))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
// UnityEngine.GameObject Pooling::Dequeue(System.String,UnityEngine.Vector2,UnityEngine.Quaternion)
extern "C"  GameObject_t1113636619 * Pooling_Dequeue_m2124937373 (Pooling_t2442357387 * __this, String_t* ___tag0, Vector2_t2156229523  ___position1, Quaternion_t2301928331  ___rotation2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Pooling_Dequeue_m2124937373_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		Dictionary_2_t745152412 * L_0 = __this->get__dictionary_2();
		String_t* L_1 = ___tag0;
		Queue_1_t959896113 * L_2 = Dictionary_2_get_Item_m3259100016(L_0, L_1, /*hidden argument*/Dictionary_2_get_Item_m3259100016_RuntimeMethod_var);
		GameObject_t1113636619 * L_3 = Queue_1_Dequeue_m526815917(L_2, /*hidden argument*/Queue_1_Dequeue_m526815917_RuntimeMethod_var);
		V_0 = L_3;
		GameObject_t1113636619 * L_4 = V_0;
		Transform_t3600365921 * L_5 = GameObject_get_transform_m1369836730(L_4, /*hidden argument*/NULL);
		Vector2_t2156229523  L_6 = ___position1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_7 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_5, L_7, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_8 = V_0;
		Transform_t3600365921 * L_9 = GameObject_get_transform_m1369836730(L_8, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_10 = ___rotation2;
		Transform_set_rotation_m3524318132(L_9, L_10, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_11 = V_0;
		GameObject_t1113636619 * L_12 = GameObject_get_gameObject_m3693461266(L_11, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_12, (bool)1, /*hidden argument*/NULL);
		Dictionary_2_t745152412 * L_13 = __this->get__dictionary_2();
		String_t* L_14 = ___tag0;
		Queue_1_t959896113 * L_15 = Dictionary_2_get_Item_m3259100016(L_13, L_14, /*hidden argument*/Dictionary_2_get_Item_m3259100016_RuntimeMethod_var);
		GameObject_t1113636619 * L_16 = V_0;
		Queue_1_Enqueue_m2666802599(L_15, L_16, /*hidden argument*/Queue_1_Enqueue_m2666802599_RuntimeMethod_var);
		GameObject_t1113636619 * L_17 = V_0;
		return L_17;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PoolingItem::.ctor()
extern "C"  void PoolingItem__ctor_m3798633176 (PoolingItem_t2406737350 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SpawningSystem::.ctor()
extern "C"  void SpawningSystem__ctor_m4067107514 (SpawningSystem_t3234322778 * __this, const RuntimeMethod* method)
{
	{
		Pooling__ctor_m2081866961(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SpawningSystem::Start()
extern "C"  void SpawningSystem_Start_m2651123252 (SpawningSystem_t3234322778 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpawningSystem_Start_m2651123252_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		List_1_t128053199 * L_0 = (List_1_t128053199 *)il2cpp_codegen_object_new(List_1_t128053199_il2cpp_TypeInfo_var);
		List_1__ctor_m1628857705(L_0, /*hidden argument*/List_1__ctor_m1628857705_RuntimeMethod_var);
		__this->set__probabilityPool_5(L_0);
		V_0 = 0;
		goto IL_0041;
	}

IL_0012:
	{
		V_1 = 0;
		goto IL_0029;
	}

IL_0019:
	{
		List_1_t128053199 * L_1 = __this->get__probabilityPool_5();
		int32_t L_2 = V_0;
		List_1_Add_m697420525(L_1, L_2, /*hidden argument*/List_1_Add_m697420525_RuntimeMethod_var);
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0029:
	{
		int32_t L_4 = V_1;
		PoolingItemU5BU5D_t451468387* L_5 = ((Pooling_t2442357387 *)__this)->get__items_4();
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		PoolingItem_t2406737350 * L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		float L_9 = L_8->get_Probability_3();
		if ((((float)(((float)((float)L_4)))) < ((float)L_9)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0041:
	{
		int32_t L_11 = V_0;
		PoolingItemU5BU5D_t451468387* L_12 = ((Pooling_t2442357387 *)__this)->get__items_4();
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject* L_13 = SpawningSystem_OnSpawn_m2349354428(__this, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_14 = MonoBehaviour_StartCoroutine_m3411253000(__this, L_13, /*hidden argument*/NULL);
		__this->set__onSpawnCoroutine_6(L_14);
		return;
	}
}
// System.Void SpawningSystem::StopSpawing()
extern "C"  void SpawningSystem_StopSpawing_m3302915996 (SpawningSystem_t3234322778 * __this, const RuntimeMethod* method)
{
	{
		Coroutine_t3829159415 * L_0 = __this->get__onSpawnCoroutine_6();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		Coroutine_t3829159415 * L_1 = __this->get__onSpawnCoroutine_6();
		MonoBehaviour_StopCoroutine_m907039165(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator SpawningSystem::OnSpawn()
extern "C"  RuntimeObject* SpawningSystem_OnSpawn_m2349354428 (SpawningSystem_t3234322778 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpawningSystem_OnSpawn_m2349354428_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3COnSpawnU3Ec__Iterator0_t3539043052 * V_0 = NULL;
	{
		U3COnSpawnU3Ec__Iterator0_t3539043052 * L_0 = (U3COnSpawnU3Ec__Iterator0_t3539043052 *)il2cpp_codegen_object_new(U3COnSpawnU3Ec__Iterator0_t3539043052_il2cpp_TypeInfo_var);
		U3COnSpawnU3Ec__Iterator0__ctor_m1420590988(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3COnSpawnU3Ec__Iterator0_t3539043052 * L_1 = V_0;
		L_1->set_U24this_2(__this);
		U3COnSpawnU3Ec__Iterator0_t3539043052 * L_2 = V_0;
		return L_2;
	}
}
// System.Void SpawningSystem::Spawn()
extern "C"  void SpawningSystem_Spawn_m2240802350 (SpawningSystem_t3234322778 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpawningSystem_Spawn_m2240802350_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	Transform_t3600365921 * V_4 = NULL;
	{
		List_1_t128053199 * L_0 = __this->get__probabilityPool_5();
		int32_t L_1 = List_1_get_Count_m361000296(L_0, /*hidden argument*/List_1_get_Count_m361000296_RuntimeMethod_var);
		int32_t L_2 = Random_Range_m4054026115(NULL /*static, unused*/, 0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		List_1_t128053199 * L_3 = __this->get__probabilityPool_5();
		int32_t L_4 = V_0;
		int32_t L_5 = List_1_get_Item_m888956288(L_3, L_4, /*hidden argument*/List_1_get_Item_m888956288_RuntimeMethod_var);
		V_1 = L_5;
		PoolingItemU5BU5D_t451468387* L_6 = ((Pooling_t2442357387 *)__this)->get__items_4();
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		PoolingItem_t2406737350 * L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		String_t* L_10 = L_9->get_Tag_0();
		V_2 = L_10;
		TransformU5BU5D_t807237628* L_11 = __this->get__points_7();
		int32_t L_12 = Random_Range_m4054026115(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))), /*hidden argument*/NULL);
		V_3 = L_12;
		TransformU5BU5D_t807237628* L_13 = __this->get__points_7();
		int32_t L_14 = V_3;
		int32_t L_15 = L_14;
		Transform_t3600365921 * L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		V_4 = L_16;
		String_t* L_17 = V_2;
		Transform_t3600365921 * L_18 = V_4;
		Vector3_t3722313464  L_19 = Transform_get_position_m36019626(L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_20 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		Transform_t3600365921 * L_21 = V_4;
		Quaternion_t2301928331  L_22 = Transform_get_rotation_m3502953881(L_21, /*hidden argument*/NULL);
		Pooling_Dequeue_m2124937373(__this, L_17, L_20, L_22, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SpawningSystem/<OnSpawn>c__Iterator0::.ctor()
extern "C"  void U3COnSpawnU3Ec__Iterator0__ctor_m1420590988 (U3COnSpawnU3Ec__Iterator0_t3539043052 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SpawningSystem/<OnSpawn>c__Iterator0::MoveNext()
extern "C"  bool U3COnSpawnU3Ec__Iterator0_MoveNext_m3294617592 (U3COnSpawnU3Ec__Iterator0_t3539043052 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3COnSpawnU3Ec__Iterator0_MoveNext_m3294617592_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00d1;
			}
		}
	}
	{
		goto IL_00f8;
	}

IL_0021:
	{
		SpawningSystem_t3234322778 * L_2 = __this->get_U24this_2();
		float L_3 = L_2->get__extraFirstSpawingTime_8();
		__this->set_U3CwaitTimeU3E__0_0(L_3);
		SpawningSystem_t3234322778 * L_4 = __this->get_U24this_2();
		float L_5 = L_4->get__maxSpawingTime_10();
		__this->set_U3CmaxTimeU3E__0_1(L_5);
	}

IL_0043:
	{
		float L_6 = __this->get_U3CwaitTimeU3E__0_0();
		SpawningSystem_t3234322778 * L_7 = __this->get_U24this_2();
		float L_8 = L_7->get__minSpawingTime_9();
		float L_9 = __this->get_U3CmaxTimeU3E__0_1();
		float L_10 = Random_Range_m2202990745(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		__this->set_U3CwaitTimeU3E__0_0(((float)il2cpp_codegen_add((float)L_6, (float)L_10)));
		float L_11 = __this->get_U3CmaxTimeU3E__0_1();
		SpawningSystem_t3234322778 * L_12 = __this->get_U24this_2();
		float L_13 = L_12->get__decreaseSpawingTime_11();
		__this->set_U3CmaxTimeU3E__0_1(((float)il2cpp_codegen_subtract((float)L_11, (float)L_13)));
		SpawningSystem_t3234322778 * L_14 = __this->get_U24this_2();
		float L_15 = L_14->get__minSpawingTime_9();
		float L_16 = __this->get_U3CmaxTimeU3E__0_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_17 = Mathf_Max_m3146388979(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		__this->set_U3CmaxTimeU3E__0_1(L_17);
		goto IL_00d1;
	}

IL_009f:
	{
		float L_18 = __this->get_U3CwaitTimeU3E__0_0();
		float L_19 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_U3CwaitTimeU3E__0_0(((float)il2cpp_codegen_subtract((float)L_18, (float)L_19)));
		int32_t L_20 = 0;
		RuntimeObject * L_21 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_20);
		__this->set_U24current_3(L_21);
		bool L_22 = __this->get_U24disposing_4();
		if (L_22)
		{
			goto IL_00cc;
		}
	}
	{
		__this->set_U24PC_5(1);
	}

IL_00cc:
	{
		goto IL_00fa;
	}

IL_00d1:
	{
		float L_23 = __this->get_U3CwaitTimeU3E__0_0();
		if ((((float)L_23) > ((float)(0.0f))))
		{
			goto IL_009f;
		}
	}
	{
		SpawningSystem_t3234322778 * L_24 = __this->get_U24this_2();
		SpawningSystem_Spawn_m2240802350(L_24, /*hidden argument*/NULL);
		goto IL_0043;
	}
	// Dead block : IL_00f1: ldarg.0

IL_00f8:
	{
		return (bool)0;
	}

IL_00fa:
	{
		return (bool)1;
	}
}
// System.Object SpawningSystem/<OnSpawn>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3COnSpawnU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3265848184 (U3COnSpawnU3Ec__Iterator0_t3539043052 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Object SpawningSystem/<OnSpawn>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3COnSpawnU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3340087710 (U3COnSpawnU3Ec__Iterator0_t3539043052 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Void SpawningSystem/<OnSpawn>c__Iterator0::Dispose()
extern "C"  void U3COnSpawnU3Ec__Iterator0_Dispose_m1072915169 (U3COnSpawnU3Ec__Iterator0_t3539043052 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void SpawningSystem/<OnSpawn>c__Iterator0::Reset()
extern "C"  void U3COnSpawnU3Ec__Iterator0_Reset_m2594448335 (U3COnSpawnU3Ec__Iterator0_t3539043052 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3COnSpawnU3Ec__Iterator0_Reset_m2594448335_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIManager::.ctor()
extern "C"  void UIManager__ctor_m873742767 (UIManager_t1042050227 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIManager::Start()
extern "C"  void UIManager_Start_m1211894305 (UIManager_t1042050227 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = __this->get__startMessage_5();
		GameObject_SetActive_m796801857(L_0, (bool)0, /*hidden argument*/NULL);
		GameplayPopup_t3833071484 * L_1 = __this->get__gameplayPopup_6();
		GameplayPopup_Initialize_m3142122491(L_1, /*hidden argument*/NULL);
		GameoverPopup_t2345258755 * L_2 = __this->get__gameoverPopup_7();
		GameoverPopup_Initialize_m3192452224(L_2, /*hidden argument*/NULL);
		float L_3 = Time_get_timeSinceLevelLoad_m2224611026(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set__gameplayStartTime_2(L_3);
		return;
	}
}
// System.Void UIManager::Update()
extern "C"  void UIManager_Update_m1085197836 (UIManager_t1042050227 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		bool L_0 = __this->get__isGameover_3();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		float L_1 = Time_get_timeSinceLevelLoad_m2224611026(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = __this->get__gameplayStartTime_2();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_2));
		GameplayPopup_t3833071484 * L_3 = __this->get__gameplayPopup_6();
		float L_4 = V_0;
		GameplayPopup_UpdateGameplayTime_m3883448322(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIManager::UpdateCollectedItems(System.Int32)
extern "C"  void UIManager_UpdateCollectedItems_m3094805831 (UIManager_t1042050227 * __this, int32_t ___collectedItems0, const RuntimeMethod* method)
{
	{
		GameplayPopup_t3833071484 * L_0 = __this->get__gameplayPopup_6();
		int32_t L_1 = ___collectedItems0;
		GameplayPopup_UpdateCollectedItems_m958571377(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIManager::OnGameOver()
extern "C"  void UIManager_OnGameOver_m921644786 (UIManager_t1042050227 * __this, const RuntimeMethod* method)
{
	{
		__this->set__isGameover_3((bool)1);
		GameManager_t1536523654 * L_0 = __this->get__gameManager_4();
		GameManager_EnableScripts_m3841988619(L_0, (bool)0, /*hidden argument*/NULL);
		GameplayPopup_t3833071484 * L_1 = __this->get__gameplayPopup_6();
		GameplayPopup_Hide_m4018672219(L_1, /*hidden argument*/NULL);
		GameoverPopup_t2345258755 * L_2 = __this->get__gameoverPopup_7();
		GameplayPopup_t3833071484 * L_3 = __this->get__gameplayPopup_6();
		String_t* L_4 = GameplayPopup_get_CollectedItemsText_m1315854544(L_3, /*hidden argument*/NULL);
		GameplayPopup_t3833071484 * L_5 = __this->get__gameplayPopup_6();
		String_t* L_6 = GameplayPopup_get_GameplayTimeText_m2611425216(L_5, /*hidden argument*/NULL);
		GameoverPopup_Show_m2080404054(L_2, L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
