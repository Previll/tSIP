//---------------------------------------------------------------------------

#ifndef FormSettingsH
#define FormSettingsH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
#include "Settings.h"
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include <Dialogs.hpp>
#include <CheckLst.hpp>
#include <Buttons.hpp>
#include <Grids.hpp>
#include <ValEdit.hpp>

#include <vector>

class TfrmAccount;
class TfrmHotkeys;
class TfrmPhones;
class TfrmUaConfOpus;

class TfrmSettings : public TForm
{
__published:	// IDE-managed Components
	TPanel *pnlBottom;
	TButton *btnCancel;
	TButton *btnApply;
	TPageControl *pcGeneral;
	TTabSheet *tsGeneral;
	TTabSheet *tsLogging;
	TCheckBox *chbAlwaysOnTop;
	TLabel *lblUiCapacity;
	TComboBox *cmbMaxUiLogLines;
	TCheckBox *chbLogToFile;
	TTabSheet *tsAccount;
	TPanel *pnlAccountsBottom;
	TButton *btnAddAccount;
	TScrollBox *scrbAccounts;
	TCheckBox *chbLogMessages;
	TTabSheet *tsCodecs;
	TTabSheet *tsCalls;
	TLabel *lblSipAutoAnswerCode;
	TEdit *edAutoAnswerCode;
	TTabSheet *tsAudioIO;
	TLabel *lblSoundInputModule;
	TComboBox *cbSoundInputMod;
	TLabel *lblAudioInput;
	TLabel *lblSoundInputDevice;
	TComboBox *cbSoundInputDev;
	TLabel *lblAudioOutput;
	TLabel *Label3;
	TLabel *lblSoundOutputDev;
	TComboBox *cbSoundOutputMod;
	TComboBox *cbSoundOutputDev;
	TLabel *lblAudioAlertOutput;
	TLabel *Label6;
	TLabel *lblSoundAlertOutputDev;
	TComboBox *cbSoundAlertOutputMod;
	TComboBox *cbSoundAlertOutputDev;
	TCheckBox *chbStartMinimizedToTray;
	TTabSheet *tsAudioProcessing;
	TLabel *lblAec;
	TComboBox *cbAec;
	TLabel *lblWebRtcAec;
	TLabel *Label1;
	TLabel *lblWebRtcAecClockSkew;
	TEdit *edWebRtcAecMsInSndCardBuf;
	TEdit *edWebRtcAecSkew;
	TLabel *lblAutoAnswerDelay;
	TEdit *edAutoAnswerDelayMin;
	TLabel *lblAutoAnswerDelayMin;
	TEdit *edAutoAnswerDelayMax;
	TLabel *lblAutoAnswerDelayMax;
	TLabel *lblGuiScaling;
	TEdit *edGuiScaling;
	TLabel *lblGuiScalingPct;
	TCheckBox *chbAutoAnswer;
	TCheckBox *chbAutoAnswerCallInfo;
	TLabel *lblAudioOutputIntercom;
	TLabel *Label2;
	TLabel *lblSoundOutputIntercomDev;
	TComboBox *cbSoundOutputIntercomMod;
	TComboBox *cbSoundOutputIntercomDev;
	TLabel *lblAutoAnswerCallInfoDelayMin;
	TEdit *edAutoAnswerCallInfoDelayMin;
	TTabSheet *tsIntegration;
	TCheckBox *chAddFilterWMCopyData;
	TButton *btnCreateIntegrationProtocol;
	TLabel *lblProtocolName;
	TEdit *edProtocolName;
	TLabel *lblProtoInfo1;
	TLabel *lblProtoInfo2;
	TTabSheet *tsRing;
	TLabel *lblRingDefault;
	TEdit *edRingDefault;
	TButton *btnRingSelectDefault;
	TLabel *lblRingBellcoreDr1;
	TEdit *edRingBellcoreDr1;
	TButton *btnRingSelectBellcoreDr1;
	TLabel *lblRingBellcoreDr2;
	TEdit *edRingBellcoreDr2;
	TButton *btnRingSelectBellcoreDr2;
	TLabel *lblRingBellcoreDr3;
	TEdit *edRingBellcoreDr3;
	TButton *btnRingSelectBellcoreDr3;
	TLabel *lblRingBellcoreDr4;
	TEdit *edRingBellcoreDr4;
	TButton *btnRingSelectBellcoreDr4;
	TLabel *lblRingBellcoreDr5;
	TEdit *edRingBellcoreDr5;
	TButton *btnRingSelectBellcoreDr5;
	TLabel *lblRingBellcoreDr6;
	TEdit *edRingBellcoreDr6;
	TButton *btnRingSelectBellcoreDr6;
	TLabel *lblRingBellcoreDr7;
	TEdit *edRingBellcoreDr7;
	TButton *btnRingSelectBellcoreDr7;
	TLabel *lblRingBellcoreDr8;
	TEdit *edRingBellcoreDr8;
	TButton *btnRingSelectBellcoreDr8;
	TOpenDialog *dlgOpenRing;
	TCheckBox *chbXBtnMinimize;
	TTabSheet *tsHotkeys;
	TTabSheet *tsContacts;
	TCheckBox *chbContactPopupShowOnIncoming;
	TCheckBox *chbContactPopupShowOnOutgoing;
	TLabel *lblContactPopup;
	TTabSheet *tsRecording;
	TCheckBox *chbRecordingEnabled;
	TTabSheet *tsSpeedDial;
	TCheckBox *chbRestoreMainWindowOnIncomingCall;
	TTabSheet *tsPhones;
	TLabel *lblRecDirType;
	TComboBox *cbRecDirType;
	TLabel *lblCustomRecDir;
	TEdit *edCustomRecDir;
	TButton *btnSelectCustomRecDir;
	TLabel *lblContactHttpQuery;
	TEdit *edContactHttpQuery;
	TLabel *lblRecordingMode;
	TComboBox *cbRecordingChannels;
	TButton *btnSelectWaveFile;
	TEdit *edSoundInputWave;
	TCheckBox *chbSingleInstance;
	TCheckBox *chbAnswerOnEventTalk;
	TTreeView *tvSelector;
	TTabSheet *tsNetwork;
	TLabel *lblLocalAddress;
	TEdit *edLocalAddress;
	TLabel *lblRtpPortRange;
	TLabel *lblRtpPortMin;
	TEdit *edRtpPortMin;
	TLabel *lblRtpPortMax;
	TEdit *edRtpPortMax;
	TLabel *lblBindInfo;
	TLabel *lblBindInfo2;
	TTabSheet *tsDisplay;
	TCheckBox *chbUserOnlyClip;
	TLabel *lblRtpJitterBufDelay;
	TLabel *lblJbufDelayMin;
	TEdit *edJbufDelayMin;
	TLabel *lblJbufDelayMax;
	TEdit *edJbufDelayMax;
	TLabel *lblIfName;
	TEdit *edIfName;
	TCheckBox *chbContactFilterUsingNote;
	TOpenDialog *openDialog;
	TComboBox *cbHttpQueryOpenMode;
	TLabel *lblHttpQueryStartMode;
	TCheckBox *chbNoBeepOnEnterKey;
	TTabSheet *tsHistory;
	TCheckBox *chbHistoryNoStoreToFile;
	TListBox *lboxAudioCodecsAvailable;
	TListBox *lboxAudioCodecsEnabled;
	TLabel *lblAudioCodecsAvailable;
	TLabel *lblAudioCodecsEnabled;
	TButton *btnAudioCodecEnable;
	TButton *btnAudioCodecDisable;
	TTabSheet *tsTrayNotifier;
	TCheckBox *chbTrayNotifierShowOnIncoming;
	TCheckBox *chbSkipTrayNotifierIfMainWindowVisible;
	TCheckBox *chbTrayNotifierShowOnOutgoing;
	TEdit *edTrayNotifierBackgroundImage;
	TLabel *lblTrayNotifierBackgroundImage;
	TButton *btnTrayNotifierBackgroundImage;
	TLabel *lblIntegrationFromBrowser;
	TLabel *lblIntegrationSoftphoneToBrowser;
	TLabel *lblIntegrationSoftphoneToBrowserMode;
	TComboBox *cbSipAccessUrlMode;
	TLabel *lblRtpTimeout;
	TEdit *edRtpTimeout;
	TCheckBox *chbAudioPreprocessingTxEnabled;
	TCheckBox *chbAudioPreprocessingTxDenoiseEnabled;
	TCheckBox *chbAudioPreprocessingTxAgcEnabled;
	TLabel *lblAudioPreprocessingTxAgcLevel;
	TEdit *edAudioPreprocessingTxAgcLevel;
	TCheckBox *chbAudioPreprocessingTxVadEnabled;
	TCheckBox *chbAudioPreprocessingTxDereverbEnabled;
	TCheckBox *chbSpeedDialPopupMenu;
	TCheckBox *chbLogFlush;
	TLabel *lblLogMaxFileSize;
	TComboBox *cbLogMaxFileSize;
	TTabSheet *tsScripts;
	TLabel *lblScriptOnCallStateFile;
	TEdit *edScriptOnCallStateChangeFile;
	TButton *btnSelectedScriptOnCallStateChange;
	TLabel *lblScriptEvents;
	TLabel *lblScriptOnStreamingStateFile;
	TEdit *edScriptOnStreamingStateChangeFile;
	TButton *btnSelectedScriptOnStreamingStateChange;
	TCheckBox *chbSpeedDialIgnorePresenceNote;
	TLabel *lblScriptOnMakeCall;
	TEdit *edScriptOnMakeCallFile;
	TButton *btnSelectedScriptOnMakeCallChange;
	TLabel *lblScriptOnTimer;
	TEdit *edScriptOnTimerFile;
	TButton *btnSelectedScriptOnTimerChange;
	TLabel *lblScriptTimerPeriod;
	TEdit *edScriptTimer;
	TLabel *lblScriptOnRegistrationStateChange;
	TEdit *edScriptOnRegistrationStateChangeFile;
	TButton *btnSelectedScriptOnRegistrationStateChange;
	TLabel *lblScriptOnStartup;
	TEdit *edScriptOnStartupFile;
	TButton *btnSelectedScriptOnStartupChange;
	TLabel *lblScriptOnBlf;
	TEdit *edScriptOnDialogInfoFile;
	TButton *btnSelectedScriptOnDialogInfoChange;
	TLabel *lblRecordingStartMode;
	TComboBox *cbRecordingStart;
	TLabel *lblScriptOnDial;
	TEdit *edScriptOnDialFile;
	TButton *btnSelectedScriptOnDialChange;
	TCheckBox *chbHandleOodRefer;
	TLabel *lblAudioRingOutput;
	TLabel *Label9;
	TLabel *lblSoundRingOutputDev;
	TComboBox *cbSoundRingOutputDev;
	TComboBox *cbSoundRingOutputMod;
	TCheckBox *chbDecodeUtfDisplayToAnsi;
	TLabel *lblCallsExtraHeaderLines;
	TMemo *memoCallsExtraHeaderLines;
	TLabel *Label4;
	TEdit *edTrayNotifierGuiScaling;
	TLabel *Label5;
	TTabSheet *tsLocking;
	TCheckBox *chbTrayNotifierHideWhenAnsweringCall;
	TLabel *lblLogRotate;
	TComboBox *cbLogRotate;
	TCheckBox *chbSpeedDialIgnoreDialogInfoRemoteIdentity;
	TBitBtn *btnSelectedScriptOnMakeCallEdit;
	TBitBtn *btnSelectedScriptOnCallStateEdit;
	TBitBtn *btnSelectedScriptOnStreamingStateEdit;
	TBitBtn *btnSelectedScriptOnRegistrationStateEdit;
	TBitBtn *btnSelectedScriptOnStartupEdit;
	TBitBtn *btnSelectedScriptOnTimerEdit;
	TBitBtn *btnSelectedScriptOnDialogInfoEdit;
	TBitBtn *btnSelectedScriptOnDialEdit;
	TCheckBox *chbHideSettings;
	TCheckBox *chbHideViewMenu;
	TCheckBox *chbHideHelpMenu;
	TCheckBox *chbKioskMode;
	TCheckBox *chbHideMouseCursor;
	TCheckBox *chbFrmMainShowWhenAnsweringCall;
	TCheckBox *chbHideToolsMenu;
	TLabel *lblRecordedSide;
	TComboBox *cbRecordedSide;
	TCheckBox *chbTrayNotifierHideWhenAnsweringCallAutomatically;
	TCheckBox *chbUsePAssertedIdentity;
	TCheckBox *chbSpeedDialKeepPreviousDialogInfoRemoteIdentityIfMissing;
	TLabel *lblSpeedDialBlfSettings;
	TCheckBox *chbSpeedDialIgnoreOrClearDialogInfoRemoteIdentityIfTerminated;
	TLabel *lblScriptOnProgrammableButtonClick;
	TEdit *edScriptOnProgrammableButtonFile;
	TButton *btnSelectedScriptOnProgrammableButtonChange;
	TBitBtn *btnSelectedScriptOnProgrammableButtonEdit;
	TCheckBox *chbHideSpeedDialToggleButton;
	TCheckBox *chbDisconnectCallOnAudioError;
	TLabel *lblScriptOnAudioError;
	TEdit *edScriptOnAudioErrorFile;
	TButton *btnSelectedScriptOnAudioErrorChange;
	TBitBtn *btnSelectedScriptOnAudioErrorEdit;
	TCheckBox *chbShowSettingsIfAnyAccountSettingsIsHidden;
	TCheckBox *chbDoNotUseSipPrefixForDirectIpCalls;
	TCheckBox *chbFrmMainShowWhenMakingCall;
	TCheckBox *chbHistoryUsePaiForDisplayIfAvailable;
	TCheckBox *chbHistoryUsePaiForDialIfAvailable;
	TCheckBox *chbHistoryShowHint;
	TCheckBox *chbHistoryFormatCallDurationAsHourMinSec;
	TCheckBox *chbHistoryShowCodecNameInHint;
	TLabel *lblLoggingConsoleFont;
	TEdit *edLoggingConsoleFont;
	TButton *btnLoggingConsoleFontSelect;
	TFontDialog *fontDialog;
	TLabel *lblScriptPeriodMs;
	TLabel *lblScriptOnTimer2;
	TEdit *edScriptOnTimer2File;
	TButton *btnSelectedScriptOnTimer2Change;
	TBitBtn *btnSelectedScriptOnTimer2Edit;
	TLabel *lblScriptTimer2Period;
	TEdit *edScriptTimer2;
	TLabel *lblScriptTimer2Ms;
	TCheckBox *chbHideStatusBar;
	TCheckBox *chbHideMainMenu;
	TLabel *lblOnCustomRequestReply;
	TEdit *edScriptOnCustomRequestReplyFile;
	TButton *btnSelectedScriptOnCustomRequestReplyChange;
	TBitBtn *btnSelectedScriptOnCustomRequestReplyEdit;
	TCheckBox *chbDoNotPassParametersToPreviousInstance;
	TButton *btnOpenRecordingFolder;
	TComboBox *cbNetworkInterfaces;
	TLabel *lblNetworkInterfaceInfo;
	TCheckBox *chbAudioRxAgcEnabled;
	TLabel *lblAudioAgcRxLevel;
	TEdit *edAudioRxAgcTarget;
	TLabel *lblAudioAgcRxMaxGain;
	TEdit *edAudioRxAgcMaxGain;
	TLabel *lblAudioAgcRxAttackRate;
	TEdit *edAudioRxAgcAttackRate;
	TEdit *edAudioRxAgcReleaseRate;
	TLabel *lblAudioAgcRxReleaseRate;
	TLabel *lblPortaudio;
	TLabel *lblPoraudioIn;
	TLabel *lblPortaudioOut;
	TEdit *edPortaudioInSuggestedLatency;
	TEdit *edPortaudioOutSuggestedLatency;
	TTabSheet *tsBranding;
	TLabel *lblMainIconFile;
	TEdit *edMainIconFile;
	TButton *btnSelectMainIconFile;
	TLabel *lblRestartRequired1;
	TLabel *lblRestartRequired2;
	TButton *btnSelectTrayNotificationImage;
	TEdit *edTrayNotificationImage;
	TLabel *lblTrayNotificationIcon;
	TCheckBox *chbCustomUserAgent;
	TCheckBox *chbFrmMainUseCustomApplicationTitle;
	TCheckBox *chbFrmMainUseCustomCaption;
	TEdit *edUserAgent;
	TEdit *edFrmMainCustomApplicationTitle;
	TEdit *edFrmMainCustomCaption;
	TTabSheet *tsUaConfOpus;
	TCheckBox *chbLogAubuf;
	TLabel *lblContactOpenFile;
	TCheckBox *chbContactOpenFileOnIncoming;
	TCheckBox *chbContactOpenFileOnOutgoing;
	TLabel *Label7;
	TEdit *edContactsFile;
	TButton *btnSelectContactsFile;
	TCheckBox *chbContactsCheckIfFileUpdated;
	TEdit *edContactsCheckIfFileUpdated;
	TLabel *lblContactsCheckIfFileUpdated;
	TCheckBox *chbContactStoreNoteInSeparateFile;
	TLabel *lblOnContactNoteOpen;
	TEdit *edScriptOnContactNoteOpenFile;
	TButton *btnSelectedScriptOnContactNoteOpenChange;
	TBitBtn *btnSelectedScriptOnContactNoteOpenEdit;
	TTabSheet *tsMessages;
	TLabel *lblMessagesRing;
	TEdit *edMessagesRing;
	TButton *btnMessagesSelectRing;
	TLabel *lblBmpBtnBackspace;
	TEdit *edBmpBtnBackspace;
	TButton *btnSelectBmpBtnBackspace;
	TLabel *lblBmpConsoleHide;
	TEdit *edBmpBtnConsoleHide;
	TButton *btnSelectBmpBtnConsoleHide;
	TLabel *lblBmpConsoleShow;
	TEdit *edBmpBtnConsoleShow;
	TButton *btnSelectBmpBtnConsoleShow;
	TLabel *lblBmpBtnResetMicVolume;
	TEdit *edBmpBtnResetMicVolume;
	TButton *btnSelectBmpBtnResetMicVolume;
	TLabel *lblBmpBtnResetSpeakerVolume;
	TEdit *edBmpBtnResetSpeakerVolume;
	TButton *btnSelectBmpBtnResetSpeakerVolume;
	TLabel *lbMessagesReply;
	TEdit *edMessagesReplyCode;
	TLabel *lblMessagesReply2;
	TEdit *edMessagesReplyReason;
	TCheckBox *chbMessagesDoNotReply;
	TLabel *lblOnRecorderState;
	TEdit *edScriptOnRecorderStateFile;
	TButton *btnSelectedScriptOnRecorderStateChange;
	TBitBtn *btnSelectedScriptOnRecorderStateEdit;
	TCheckBox *chbNoTaskbarButtonRestore;
	TLabel *lblCodecsInfo;
	TLabel *lblCodecsInfo2;
	TCheckBox *chbNoTrayIcon;
	TCheckBox *chbHideDialpad;
	TCheckBox *chbLogMessagesOnlyFirstLines;
	TLabel *lblTranslation;
	TComboBox *cbTranslation;
	TLabel *lblTranslateInfo;
	TCheckBox *chbTranslationLogMissingKeys;
	TCheckBox *chbRecordingNoNumberB64Encoding;
	TCheckBox *chbTrayNotifierDoNotChangePosition;
	TCheckBox *chbAcceptCommandLineScript;
	TCheckBox *chbSpeedDialUseGrid;
	TEdit *edSpeedDialGridSize;
	TCheckBox *chbSpeedDialSaveAllSettings;
	TTabSheet *tsMainWindow;
	TCheckBox *chbFrmMainHideCallPanel;
	TLabel *lblMainWindowCollapsedSize;
	TLabel *lblMainWindowExpandedSize;
	TLabel *lblFrmMainMainPanelPositionCollapsed;
	TLabel *lblFrmMainMainlPanelPositionExpanded;
	TLabel *lblCollapsedWidth;
	TLabel *lblExpandedWidth;
	TLabel *lblMainPanelCollapsedLeft;
	TLabel *lblMainPanelExpandedLeft;
	TEdit *edMainPanelExpandedLeft;
	TEdit *edMainPanelCollapsedLeft;
	TEdit *edExpandedWidth;
	TEdit *edCollapsedWidth;
	TLabel *lblCollapsedHeight;
	TLabel *lblExpandedHeight;
	TLabel *lblMainPanelCollapsedTop;
	TLabel *lblMainPanelExpandedTop;
	TEdit *edMainPanelExpandedTop;
	TEdit *edMainPanelCollapsedTop;
	TEdit *edExpandedHeight;
	TEdit *edCollapsedHeight;
	TLabel *lblFrmMainLayout;
	TLabel *lblDialComboboxSortOrder;
	TComboBox *cbFrmMainLayout;
	TComboBox *cbDialComboboxOrder;
	TCheckBox *chbFrmMainHideMainPanel;
	TLabel *lblFrmMainCallPanelPositionCollapsed;
	TLabel *lblFrmMainCallPanelPositionExpanded;
	TLabel *lblCallPanelCollapsedLeft;
	TLabel *lblCallPanelExpandedLeft;
	TEdit *edCallPanelCollapsedLeft;
	TEdit *edCallPanelExpandedLeft;
	TLabel *lblCallPanelCollapsedTop;
	TLabel *lblCallPanelExpandedTop;
	TEdit *edCallPanelCollapsedTop;
	TEdit *edCallPanelExpandedTop;
	TLabel *lblScriptOnProgrammableButtonMouseUpDown;
	TEdit *edScriptOnProgrammableButtonMouseUpDownFile;
	TButton *btnSelectedScriptOnProgrammableButtonMouseUpDownChange;
	TBitBtn *btnSelectedScriptOnProgrammableButtonMouseUpDownEdit;
	TCheckBox *chbFrmMainUseClientAreaSizes;
	TCheckBox *chbLoopRingWithoutSilence;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall btnCancelClick(TObject *Sender);
	void __fastcall btnApplyClick(TObject *Sender);
	void __fastcall btnAddAccountClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall cbSoundInputModChange(TObject *Sender);
	void __fastcall cbSoundOutputModChange(TObject *Sender);
	void __fastcall cbSoundAlertOutputModChange(TObject *Sender);
	void __fastcall cbSoundOutputIntercomModChange(TObject *Sender);
	void __fastcall btnCreateIntegrationProtocolClick(TObject *Sender);
	void __fastcall btnRingSelectClick(TObject *Sender);
	void __fastcall FormKeyPress(TObject *Sender, char &Key);
	void __fastcall cbRecDirTypeChange(TObject *Sender);
	void __fastcall btnSelectCustomRecDirClick(TObject *Sender);
	void __fastcall btnSelectWaveFileClick(TObject *Sender);
	void __fastcall tvSelectorChange(TObject *Sender, TTreeNode *Node);
	void __fastcall btnSelectImageClick(TObject *Sender);
	void __fastcall btnAudioCodecEnableClick(TObject *Sender);
	void __fastcall btnAudioCodecDisableClick(TObject *Sender);
	void __fastcall lboxAudioCodecsAvailableDblClick(TObject *Sender);
	void __fastcall lboxAudioCodecsEnabledDblClick(TObject *Sender);
	void __fastcall lboxAudioCodecsEnabledStartDrag(TObject *Sender,
          TDragObject *&DragObject);
	void __fastcall lboxAudioCodecsEnabledDragOver(TObject *Sender,
          TObject *Source, int X, int Y, TDragState State, bool &Accept);
	void __fastcall lboxAudioCodecsEnabledDragDrop(TObject *Sender,
          TObject *Source, int X, int Y);
	void __fastcall chbAudioPreprocessingTxEnabledClick(TObject *Sender);
	void __fastcall btnSelectedScriptClick(TObject *Sender);
	void __fastcall cbSoundRingOutputModChange(TObject *Sender);
	void __fastcall btnSelectedScriptEditClick(TObject *Sender);
	void __fastcall cbRecordingChannelsChange(TObject *Sender);
	void __fastcall btnLoggingConsoleFontSelectClick(TObject *Sender);
	void __fastcall btnOpenRecordingFolderClick(TObject *Sender);
	void __fastcall cbNetworkInterfacesChange(TObject *Sender);
	void __fastcall btnSelectContactsFileClick(TObject *Sender);
	void __fastcall btnMessagesSelectRingClick(TObject *Sender);
private:	// User declarations
	std::vector<TfrmAccount*> frmAccountVector;
	void ChangeSoundOutputMod(TComboBox *target, TLabel *label, int moduleIndex, AnsiString selected);
	TfrmHotkeys *frmHotkeys;
	TfrmPhones *frmPhones;
	TfrmUaConfOpus *frmConfOpus;
	std::vector<TTabSheet*> tabs;	// first level of tabs
	TTabSheet *lastTab;
	void AudioCodecEnableSelected(void);
	void AudioCodecDisableSelected(void);
	void AudioPreprocessingUpdate(void);
	void ShowFonts(void);
	void UpdateNetworkInterface(void);
public:		// User declarations
	__fastcall TfrmSettings(TComponent* Owner);
	Settings tmpSettings;
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmSettings *frmSettings;
//---------------------------------------------------------------------------
#endif
